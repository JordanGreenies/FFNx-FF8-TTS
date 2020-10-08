/****************************************************************************/
//    Copyright (C) 2009 Aali132                                            //
//    Copyright (C) 2018 quantumpencil                                      //
//    Copyright (C) 2018 Maxime Bacoux                                      //
//    Copyright (C) 2020 Julian Xhokaxhiu                                   //
//    Copyright (C) 2020 myst6re                                            //
//    Copyright (C) 2020 Chris Rizzitello                                   //
//    Copyright (C) 2020 John Pritchard                                     //
//                                                                          //
//    This file is part of FFNx                                             //
//                                                                          //
//    FFNx is free software: you can redistribute it and/or modify          //
//    it under the terms of the GNU General Public License as published by  //
//    the Free Software Foundation += either version 3 of the License         //
//                                                                          //
//    FFNx is distributed in the hope that it will be useful +=               //
//    but WITHOUT ANY WARRANTY; without even the implied warranty of        //
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         //
//    GNU General Public License for more details.                          //
/****************************************************************************/

#include <fstream>
#include <toml.hpp>

#include "cfg.h"

#define FFNX_CFG_FILE "FFNx.toml"

// configuration variables with their default values
std::string mod_path;
bool enable_ffmpeg_videos;
std::string ffmpeg_video_ext;
bool use_external_sfx;
std::string external_sfx_path;
std::string external_sfx_ext;
bool use_external_music;
bool external_music_resume;
std::string external_music_path;
std::string external_music_ext;
std::string he_bios_path;
std::string external_voice_path;
std::string external_voice_ext;
bool enable_voice_music_fade;
long external_voice_music_fade_volume;
bool save_textures;
bool trace_all;
bool trace_renderer;
bool trace_movies;
bool trace_music;
bool trace_sfx;
bool trace_fake_dx;
bool trace_direct;
bool trace_files;
bool trace_loaders;
bool trace_lights;
bool trace_opcodes;
bool trace_voice;
bool vertex_log;
bool uniform_log;
bool show_renderer_backend;
bool show_fps;
bool show_stats;
bool show_version;
long window_size_x;
long window_size_y;
long internal_resolution_scale;
bool preserve_aspect;
bool fullscreen;
long refresh_rate;
bool enable_vsync;
bool linear_filter;
bool mdef_fix;
bool fancy_transparency;
long enable_antialiasing;
bool enable_anisotropic;
bool skip_frames;
bool ff7_more_debug;
bool ff8_ssigpu_debug;
bool show_applog;
bool show_missing_textures;
bool show_error_popup;
bool movie_sync_debug;
long renderer_backend;
bool renderer_debug;
bool create_crash_dump;
std::string steam_game_userdata;
std::string hext_patching_path;
std::string override_path;
std::string direct_mode_path;
std::string save_path;
bool enable_debug_ui;
long debug_ui_hotkey;
bool ff8_keep_game_running_in_background;
double speedhack_step;
double speedhack_max;
double speedhack_min;
bool enable_animated_textures;

void read_cfg()
{
	auto config = toml::parse_file(FFNX_CFG_FILE);

	enable_ffmpeg_videos = !ff8;

	// Read config values
	mod_path = config["mod_path"].value_or("");
	enable_ffmpeg_videos = config["enable_ffmpeg_videos"].value_or(true);
	ffmpeg_video_ext = config["ffmpeg_video_ext"].value_or("");
	use_external_sfx = config["use_external_sfx"].value_or(false);
	external_sfx_path = config["external_sfx_path"].value_or("");
	external_sfx_ext = config["external_sfx_ext"].value_or("");
	use_external_music = config["use_external_music"].value_or(false);
	external_music_resume = config["external_music_resume"].value_or(true);
	external_music_path = config["external_music_path"].value_or("");
	external_music_ext = config["external_music_ext"].value_or("");
	he_bios_path = config["he_bios_path"].value_or("");
	external_voice_path = config["external_voice_path"].value_or("");
	external_voice_ext = config["external_voice_ext"].value_or("");
	enable_voice_music_fade = config["enable_voice_music_fade"].value_or(false);
	external_voice_music_fade_volume = config["external_voice_music_fade_volume"].value_or(25);
	save_textures = config["save_textures"].value_or(false);
	trace_all = config["trace_all"].value_or(false);
	trace_renderer = config["trace_renderer"].value_or(false);
	trace_movies = config["trace_movies"].value_or(false);
	trace_music = config["trace_music"].value_or(false);
	trace_sfx = config["trace_sfx"].value_or(false);
	trace_fake_dx = config["trace_fake_dx"].value_or(false);
	trace_direct = config["trace_direct"].value_or(false);
	trace_files = config["trace_files"].value_or(false);
	trace_loaders = config["trace_loaders"].value_or(false);
	trace_lights = config["trace_lights"].value_or(false);
	trace_opcodes = config["trace_opcodes"].value_or(false);
	trace_voice = config["trace_voice"].value_or(false);
	vertex_log = config["vertex_log"].value_or(false);
	uniform_log = config["uniform_log"].value_or(false);
	show_renderer_backend = config["show_renderer_backend"].value_or(true);
	show_fps = config["show_fps"].value_or(false);
	show_stats = config["show_stats"].value_or(false);
	show_version = config["show_version"].value_or(true);
	window_size_x = config["window_size_x"].value_or(0);
	window_size_y = config["window_size_y"].value_or(0);
	internal_resolution_scale = config["internal_resolution_scale"].value_or(2);
	preserve_aspect = config["preserve_aspect"].value_or(true);
	fullscreen = config["fullscreen"].value_or(false);
	refresh_rate = config["refresh_rate"].value_or(0);
	enable_vsync = config["enable_vsync"].value_or(true);
	linear_filter = config["linear_filter"].value_or(false);
	mdef_fix = config["mdef_fix"].value_or(true);
	fancy_transparency = config["fancy_transparency"].value_or(false);
	enable_antialiasing = config["enable_antialiasing"].value_or(0);
	enable_anisotropic = config["enable_anisotropic"].value_or(true);
	skip_frames = config["skip_frames"].value_or(false);
	ff7_more_debug = config["ff7_more_debug"].value_or(false);
	ff8_ssigpu_debug = config["ff8_ssigpu_debug"].value_or(false);
	show_applog = config["show_applog"].value_or(true);
	show_missing_textures = config["show_missing_textures"].value_or(false);
	show_error_popup = config["show_error_popup"].value_or(false);
	movie_sync_debug = config["movie_sync_debug"].value_or(false);
	renderer_backend = config["renderer_backend"].value_or(RENDERER_BACKEND_AUTO);
	renderer_debug = config["renderer_debug"].value_or(false);
	create_crash_dump = config["create_crash_dump"].value_or(false);
	steam_game_userdata = config["steam_game_userdata"].value_or("");
	hext_patching_path = config["hext_patching_path"].value_or("");
	override_path = config["override_path"].value_or("");
	direct_mode_path = config["direct_mode_path"].value_or("");
	save_path = config["save_path"].value_or("");
	enable_debug_ui = config["enable_debug_ui"].value_or(false);
	debug_ui_hotkey = config["debug_ui_hotkey"].value_or(0);
	ff8_keep_game_running_in_background = config["ff8_keep_game_running_in_background"].value_or(false);
	speedhack_step = config["speedhack_step"].value_or(0.5);
	speedhack_max = config["speedhack_max"].value_or(8.0);
	speedhack_min = config["speedhack_min"].value_or(1.0);
	enable_animated_textures = config["enable_animated_textures"].value_or(false);

	if (ff8)
	{
		// Reset some internal flags as they are not compatible with FF8
		fancy_transparency = false;
	}

	// Windows x or y size can't be less then 0
	if (window_size_x < 0) window_size_x = 0;
	if (window_size_y < 0) window_size_y = 0;

	// Normalize voice music fade volume
	if (external_voice_music_fade_volume < 0) external_voice_music_fade_volume = 0;
	if (external_voice_music_fade_volume > 100) external_voice_music_fade_volume = 100;


	// #############
	// SAFE DEFAULTS
	// #############

	// HEXT PATCHING

	if (hext_patching_path.empty())
	{
		hext_patching_path = "hext";
	}

	if (ff8)
		hext_patching_path += "/ff8";
	else
		hext_patching_path += "/ff7";

	switch (version)
	{
	case VERSION_FF7_102_US:
		if (ff7_japanese_edition)
		{
			hext_patching_path += "/ja";
		}
		else
		{
			hext_patching_path += "/en";
		}
		break;
	case VERSION_FF7_102_FR:
		hext_patching_path += "/fr";
		break;
	case VERSION_FF7_102_DE:
		hext_patching_path += "/de";
		break;
	case VERSION_FF7_102_SP:
		hext_patching_path += "/es";
		break;
	case VERSION_FF8_12_US:
		hext_patching_path += "/en";
		break;
	case VERSION_FF8_12_US_NV:
		hext_patching_path += "/en_nv";
		break;
	case VERSION_FF8_12_FR:
		hext_patching_path += "/fr";
		break;
	case VERSION_FF8_12_FR_NV:
		hext_patching_path += "/fr_nv";
		break;
	case VERSION_FF8_12_DE:
		hext_patching_path += "/de";
		break;
	case VERSION_FF8_12_DE_NV:
		hext_patching_path += "/de";
		break;
	case VERSION_FF8_12_SP:
		hext_patching_path += "/es";
		break;
	case VERSION_FF8_12_SP_NV:
		hext_patching_path += "/es_nv";
		break;
	case VERSION_FF8_12_IT:
		hext_patching_path += "/it";
		break;
	case VERSION_FF8_12_IT_NV:
		hext_patching_path += "/it_nv";
		break;
	case VERSION_FF8_12_US_EIDOS:
		hext_patching_path += "/en_eidos";
		break;
	case VERSION_FF8_12_US_EIDOS_NV:
		hext_patching_path += "/en_eidos_nv";
		break;
	case VERSION_FF8_12_JP:
		hext_patching_path += "/jp";
		break;
	}

	//OVERRIDE PATH
	if (override_path.empty())
		override_path = "override";

	// DIRECT MODE PATH
	if (direct_mode_path.empty())
		direct_mode_path = "direct";

	// EXTERNAL MOVIE EXTENSION
	if (ffmpeg_video_ext.empty())
		ffmpeg_video_ext = "avi";

	// EXTERNAL SFX PATH
	if (external_sfx_path.empty())
		external_sfx_path = "sfx";

	// EXTERNAL SFX EXTENSION
	if (external_sfx_ext.empty())
		external_sfx_ext = "ogg";

	// EXTERNAL MUSIC EXTENSION
	if (external_music_ext.empty())
		external_music_ext = "ogg";

	// EXTERNAL VOICE PATH
	if (external_voice_path.empty())
		external_voice_path = "voice";

	// EXTERNAL VOICE EXTENSION
	if (external_voice_ext.empty())
		external_voice_ext = "ogg";

	// MOD PATH
	if (mod_path.empty())
		mod_path = "mods/Textures";
}
