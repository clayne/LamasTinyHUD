﻿#pragma once

namespace config {
    class mcm_setting {
    public:
        static void read_setting();

        static uint32_t get_top_action_key();
        static uint32_t get_right_action_key();
        static uint32_t get_bottom_action_key();
        static uint32_t get_left_action_key();

        static uint32_t get_top_type();
        static uint32_t get_selected_top_item_form();
        static uint32_t get_top_slot_action();
        static uint32_t get_top_hand_selection();

        static uint32_t get_top_type_left();
        static uint32_t get_selected_top_item_form_left();
        static uint32_t get_top_slot_action_left();

        static float get_hud_image_scale_width();
        static float get_hud_image_scale_height();
        static float get_hud_image_position_width();
        static float get_hud_image_position_height();
        static float get_hud_slot_position_offset();
        static float get_hud_key_position_offset();
        static float get_icon_scale_width();
        static float get_icon_scale_height();
        static uint32_t get_icon_opacity();
        static uint32_t get_slot_button_feedback();
        static float get_key_icon_scale_width();
        static float get_key_icon_scale_height();
    };
}
