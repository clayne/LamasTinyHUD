#pragma once
namespace util {
    constexpr int32_t const_log_trace = 0;
    constexpr int32_t const_log_debug = 1;
    constexpr int32_t const_log_info = 2;

    constexpr auto dynamic_name = "dynamic";
    constexpr auto delimiter = "|";

    const auto ini_path = R"(Data\SKSE\Plugins\)";
    const std::string ini_default_name = "LamasTinyHUD_Custom";
    const std::string ini_elden_name = "LamasTinyHUD_Custom_Elden";
    const std::string ini_ending = ".ini";

    constexpr RE::FormID unarmed = 0x000001F4;

    //I just get names from the default potions, for the default health, stamina, magicka
    inline static std::map<RE::ActorValue, RE::FormID> actor_value_to_base_potion_map_ = { { RE::ActorValue::kHealth,
                                                                                               0x0003EADE },
        { RE::ActorValue::kStamina, 0x00039BE8 },
        { RE::ActorValue::kMagicka, 0x0003EAE1 } };
}
