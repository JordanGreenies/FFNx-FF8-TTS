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
//    the Free Software Foundation, either version 3 of the License         //
//                                                                          //
//    FFNx is distributed in the hope that it will be useful,               //
//    but WITHOUT ANY WARRANTY; without even the implied warranty of        //
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         //
//    GNU General Public License for more details.                          //
/****************************************************************************/

#pragma once

#include <confuse.h>

#include "log.h"

#define RENDERER_BACKEND_AUTO 0
#define RENDERER_BACKEND_OPENGL 1
#define RENDERER_BACKEND_DIRECT3D9 2
#define RENDERER_BACKEND_DIRECT3D11 3
#define RENDERER_BACKEND_DIRECT3D12 4
#define RENDERER_BACKEND_VULKAN 5

extern char *mod_path;
extern cfg_bool_t enable_ffmpeg_videos;
extern char* ffmpeg_video_ext;
extern cfg_bool_t use_external_music;
extern char* external_music_path;
extern char* external_music_ext;
extern char* winamp_in_plugin;
extern char* external_voice_path;
extern char* external_voice_ext;
extern cfg_bool_t save_textures;
extern cfg_bool_t trace_all;
extern cfg_bool_t trace_movies;
extern cfg_bool_t trace_music;
extern cfg_bool_t trace_sfx;
extern cfg_bool_t trace_fake_dx;
extern cfg_bool_t trace_direct;
extern cfg_bool_t trace_files;
extern cfg_bool_t trace_loaders;
extern cfg_bool_t trace_lights;
extern cfg_bool_t trace_opcodes;
extern cfg_bool_t vertex_log;
extern cfg_bool_t uniform_log;
extern cfg_bool_t show_renderer_backend;
extern cfg_bool_t show_fps;
extern cfg_bool_t show_stats;
extern cfg_bool_t show_version;
extern long window_size_x;
extern long window_size_y;
extern long internal_resolution_scale;
extern cfg_bool_t preserve_aspect;
extern cfg_bool_t fullscreen;
extern long refresh_rate;
extern cfg_bool_t enable_vsync;
extern cfg_bool_t linear_filter;
extern cfg_bool_t mdef_fix;
extern cfg_bool_t fancy_transparency;
extern long enable_antialiasing;
extern cfg_bool_t enable_anisotropic;
extern cfg_bool_t skip_frames;
extern cfg_bool_t ff7_more_debug;
extern cfg_bool_t ff8_ssigpu_debug;
extern cfg_bool_t show_applog;
extern cfg_bool_t show_missing_textures;
extern cfg_bool_t show_error_popup;
extern cfg_bool_t movie_sync_debug;
extern long renderer_backend;
extern cfg_bool_t renderer_debug;
extern cfg_bool_t create_crash_dump;
extern char* steam_game_userdata;
extern char* hext_patching_path;
extern char* override_path;
extern char* direct_mode_path;
extern char* save_path;
extern cfg_bool_t enable_debug_ui;
extern long debug_ui_hotkey;
extern cfg_bool_t ff8_keep_game_running_in_background;
extern double speedhack_step;
extern double speedhack_max;
extern double speedhack_min;
extern cfg_bool_t enable_animated_textures;

void read_cfg();
