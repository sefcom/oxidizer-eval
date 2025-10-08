__int64 __fastcall uu_arch::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+0h] [rbp-558h] BYREF
  _QWORD v12[2]; // [rsp+10h] [rbp-548h] BYREF
  __int64 v13; // [rsp+20h] [rbp-538h] BYREF
  __int64 v14; // [rsp+28h] [rbp-530h]
  __int128 v15; // [rsp+30h] [rbp-528h]
  __int128 v16; // [rsp+40h] [rbp-518h]
  __int64 v17; // [rsp+50h] [rbp-508h]
  __int64 v18; // [rsp+58h] [rbp-500h] BYREF
  __int64 v19; // [rsp+60h] [rbp-4F8h]
  _BYTE dest[520]; // [rsp+68h] [rbp-4F0h] BYREF
  void *v21; // [rsp+270h] [rbp-2E8h] BYREF
  __int64 v22; // [rsp+278h] [rbp-2E0h]
  __int64 *v23; // [rsp+280h] [rbp-2D8h]
  _QWORD src[64]; // [rsp+288h] [rbp-2D0h] BYREF

  uu_arch::uu_app(&v21);
  clap_builder::builder::command::Command::try_get_matches_from(&v18, &v21, a1, a2);
  if ( __OFSUB__(-v18, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v19,
             &v21,
             v2,
             -v18);
  v17 = *(_QWORD *)&dest[32];
  v16 = *(_OWORD *)&dest[16];
  v15 = *(_OWORD *)dest;
  v13 = v18;
  v14 = v19;
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v13);
  <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new(&v21);
  if ( v21 == (void *)0x8000000000000000LL )
    return uu_arch::uumain::uumain::{{closure}}(v22, v23);
  memcpy(&dest[8], src, 0x200uLL);
  v18 = (__int64)v21;
  v19 = v22;
  *(_QWORD *)dest = v23;
  alloc::string::String::from_utf8_lossy(&v13, *(_QWORD *)&dest[88], *(_QWORD *)&dest[96]);
  v4 = v13;
  v5 = v14;
  v6 = v15;
  v12[0] = core::str::<impl str>::trim_matches(v14, v15);
  v12[1] = v7;
  v21 = &unk_D5670;
  v22 = 2LL;
  src[1] = 0LL;
  v23 = &v11;
  src[0] = 1LL;
  ((void (__fastcall *)(void **, __int64, __int64, __int64, __int64, __int64, _QWORD *, __int64 (__fastcall *)()))std::io::stdio::_print)(
    &v21,
    v6,
    v7,
    v8,
    v9,
    v10,
    v12,
    <&T as core::fmt::Display>::fmt);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v4, v5);
  core::ptr::drop_in_place<platform_info::lib_impl::target::PlatformInfo>(&v18);
  return 0LL;
}