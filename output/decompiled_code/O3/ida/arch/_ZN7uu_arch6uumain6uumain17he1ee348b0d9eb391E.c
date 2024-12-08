__int64 __fastcall uu_arch::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  void *v4; // [rsp+0h] [rbp-558h] BYREF
  __int64 v5; // [rsp+8h] [rbp-550h]
  __int128 v6; // [rsp+10h] [rbp-548h]
  __int128 v7; // [rsp+20h] [rbp-538h]
  __int64 v8; // [rsp+30h] [rbp-528h]
  _QWORD v9[2]; // [rsp+38h] [rbp-520h] BYREF
  _QWORD v10[2]; // [rsp+48h] [rbp-510h] BYREF
  void *v11; // [rsp+58h] [rbp-500h] BYREF
  __int64 v12; // [rsp+60h] [rbp-4F8h]
  _BYTE dest[520]; // [rsp+68h] [rbp-4F0h] BYREF
  void *v14; // [rsp+270h] [rbp-2E8h] BYREF
  __int64 v15; // [rsp+278h] [rbp-2E0h]
  _QWORD *v16; // [rsp+280h] [rbp-2D8h]
  _QWORD src[64]; // [rsp+288h] [rbp-2D0h] BYREF

  uu_arch::uu_app(&v14);
  clap_builder::builder::command::Command::try_get_matches_from(&v11, &v14, a1, a2);
  if ( v11 == (void *)0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
  v8 = *(_QWORD *)&dest[32];
  v7 = *(_OWORD *)&dest[16];
  v6 = *(_OWORD *)dest;
  v4 = v11;
  v5 = v12;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v4);
  <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new(&v14);
  if ( v14 == (void *)0x8000000000000000LL )
    return uu_arch::uumain::uumain::{{closure}}(v15, v16);
  memcpy(&dest[8], src, 0x200uLL);
  v11 = v14;
  v12 = v15;
  *(_QWORD *)dest = v16;
  std::sys::os_str::bytes::Slice::to_string_lossy(&v4, *(_QWORD *)&dest[88], *(_QWORD *)&dest[96]);
  v10[0] = core::str::<impl str>::trim_matches(v5, v6);
  v10[1] = v3;
  v9[0] = v10;
  v9[1] = <&T as core::fmt::Display>::fmt;
  v14 = &unk_1026C0;
  v15 = 2LL;
  src[1] = 0LL;
  v16 = v9;
  src[0] = 1LL;
  std::io::stdio::_print(&v14);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v4);
  core::ptr::drop_in_place<platform_info::lib_impl::target::PlatformInfo>(&v11);
  return 0LL;
}
