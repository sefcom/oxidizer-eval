long long uu_uname::uumain::uumain::h277b5230ab5dc1ce(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x43b]
    char v1;  // [sp-0x43a]
    char v2;  // [sp-0x439]
    unsigned long v3;  // [sp-0x438]
    char v4;  // [sp-0x430]
    unsigned long v5;  // [sp-0x428], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x420]
    int v7;  // [sp-0x418]
    int v8;  // [sp-0x408]
    unsigned long long v9;  // [sp-0x3f8]
    char v10;  // [bp-0x3f0]
    char v11;  // [bp-0x3e8]
    char v12;  // [bp-0x3e0]
    char *v13;  // [sp-0x3d8]
    unsigned long long v14;  // [sp-0x3d0]
    unsigned long v15;  // [sp-0x3c8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x3c0]
    char v17;  // [bp-0x3b8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v18;  // [sp-0x3b0], Other Possible Types: unsigned long long
    char v19;  // [bp-0x3a8], Other Possible Types: unsigned long long
    char v20;  // [bp-0x398]
    char v21;  // [bp-0x388]
    char v22;  // [bp-0x2f8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v23;  // [sp-0x2f0], Other Possible Types: unsigned long long
    struct struct_0 **v24;  // [sp-0x2e8], Other Possible Types: unsigned long
    char v25;  // [bp-0x2e0], Other Possible Types: unsigned long long
    void* v26;  // [sp-0x2d8]
    unsigned long long v28;  // rdx
    void* v29;  // rax
    int v30;  // xmm0
    int v34;  // ymm0
    unsigned long long v35;  // r15
    unsigned long long v36;  // rsi

    uu_uname::uu_app::hbc99068917c28964(&v22, a1, v28);
    clap_builder::builder::command::Command::try_get_matches_from::h4d40ba92b41b639e(&v17, &v22, a0, a1);
    if (v5 == 0x8000000000000000)
    {
        v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(v6);
        return v29;
    }
    v9 = *((long long *)&v21);
    v30 = *((int128_t *)&v19);
    *((int128_t *)&v8) = *((int128_t *)&v20);
    v7 = v30;
    v5 = v17;
    v6 = v18;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v5, _ZN8uu_uname7options3ALL17h054e7ec081e21667E, g_50b070);
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v5, _ZN8uu_uname7options11KERNEL_NAME17h8e29a552d042f066E, g_50b080);
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v5, _ZN8uu_uname7options8NODENAME17h030955f770e48e1bE, g_50b090);
    v3 = (unsigned long long)(v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (unsigned int)((unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v5, _ZN8uu_uname7options14KERNEL_VERSION17h386a14a0fc5a7bbdE, g_50b0a0) * 0x1000000) | (unsigned int)(v0 * 0x10000) | (unsigned int)(v1 * 0x100) | v2 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT (((unsigned int)((unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v5, _ZN8uu_uname7options7MACHINE17h2642e1b53ab636dcE, g_50b0c0) * 0x100) | (int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v5, _ZN8uu_uname7options14KERNEL_RELEASE17h6c8cdfacbe3ebb06E, g_50b0b0)) & 65535) * 0x100000000) | ((unsigned int)((unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v5, _ZN8uu_uname7options14KERNEL_VERSION17h386a14a0fc5a7bbdE, g_50b0a0) * 0x1000000) | (unsigned int)(v0 * 0x10000) | (unsigned int)(v1 * 0x100) | v2) & 340282366920938463463374325961086468095 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (0 CONCAT (((unsigned int)((unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v5, _ZN8uu_uname7options17HARDWARE_PLATFORM17h46d1d76756312c03E, g_50b0e0) * 0x100) | (int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v5, _ZN8uu_uname7options9PROCESSOR17h85b80fd217463c16E, g_50b0d0)) & 65535) * 0x1000000000000) | ((0 CONCAT (((unsigned int)((unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v5, _ZN8uu_uname7options7MACHINE17h2642e1b53ab636dcE, g_50b0c0) * 0x100) | (int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v5, _ZN8uu_uname7options14KERNEL_RELEASE17h6c8cdfacbe3ebb06E, g_50b0b0)) & 65535) * 0x100000000) | ((unsigned int)((unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v5, _ZN8uu_uname7options14KERNEL_VERSION17h386a14a0fc5a7bbdE, g_50b0a0) * 0x1000000) | (unsigned int)(v0 * 0x10000) | (unsigned int)(v1 * 0x100) | v2) & 340282366920938463463374325961086468095) & 340282366920938463444928144833035370495);
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v5, _ZN8uu_uname7options2OS17h4892fc38c9982147E, g_50b0f0);
    uu_uname::UNameOutput::new::h351ea691cfe1026c(&v22, &v3);
    v35 = v22;
    v29 = v23;
    if (v35 == 9223372036854775809)
    {
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h38dda6f74d1bca23(&v5);
        return v29;
    }
    memcpy(&v19, &v25, 168);
    v17 = v35;
    v18 = v29;
    v19 = v24;
    uu_uname::UNameOutput::display::hd0fb8855ff2e124d(&v10, &v17);
    v15 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hc9564037a709315f(*((long long *)&v11), *((long long *)&v12));
    v16 = v28;
    v13 = &v15;
    v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h415ff689f5083721;
    v22 = &g_508900;
    v23 = 2;
    v26 = 0;
    v24 = &v13;
    v25 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v22, v36, v28);
    ::0x45e240::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3725b2c42a3d5976(&v10);
    core::ptr::drop_in_place$LT$uu_uname..UNameOutput$GT$::hf72124b3c6314761(&v17);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h38dda6f74d1bca23(&v5);
    return 0;
}
