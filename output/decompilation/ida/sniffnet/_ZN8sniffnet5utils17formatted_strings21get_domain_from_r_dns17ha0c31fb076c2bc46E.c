__int64 __fastcall sniffnet::utils::formatted_strings::get_domain_from_r_dns(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 (__fastcall *v3)(); // r15
  __int64 v4; // r15
  __int128 *v5; // rdx
  __int128 *v6; // rcx
  __int64 result; // rax
  __int128 *v8; // [rsp+0h] [rbp-E8h] BYREF
  __int128 *v9; // [rsp+8h] [rbp-E0h] BYREF
  __int64 *v10; // [rsp+10h] [rbp-D8h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+18h] [rbp-D0h]
  __int128 v12; // [rsp+20h] [rbp-C8h]
  __int128 v13; // [rsp+30h] [rbp-B8h]
  __int128 v14; // [rsp+40h] [rbp-A8h]
  __int16 v15; // [rsp+50h] [rbp-98h]
  __int128 v16; // [rsp+58h] [rbp-90h] BYREF
  __int64 v17; // [rsp+68h] [rbp-80h]
  __int128 v18; // [rsp+70h] [rbp-78h] BYREF
  __int128 v19; // [rsp+80h] [rbp-68h]
  __int128 v20; // [rsp+90h] [rbp-58h]
  __int64 v21; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+B0h] [rbp-38h]
  __int64 v24; // [rsp+B8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(__int64 (__fastcall **)())(a2 + 16);
  core::net::parser::<impl core::str::traits::FromStr for core::net::ip_addr::IpAddr>::from_str(&v10, v2, v3);
  if ( (_BYTE)v10 == 2 && v3 )
  {
    <char as core::str::pattern::Pattern>::into_searcher(&v18, 46LL, v2, v3);
    v14 = v20;
    v13 = v19;
    v12 = v18;
    v10 = 0LL;
    v11 = v3;
    v15 = 1;
    core::iter::traits::iterator::Iterator::collect(&v21, &v10);
    if ( v23 <= 1 )
    {
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
      *(_OWORD *)a1 = *(_OWORD *)a2;
      return core::ptr::drop_in_place<alloc::vec::Vec<winit::platform_impl::linux::wayland::state::WindowCompositorUpdate>>(
               v21,
               v22);
    }
    else
    {
      v4 = v22;
      v5 = (__int128 *)(v22 + 16 * v23 - 16);
      if ( v22 + 16 * v23 == 16 )
        v5 = &xmmword_26FBD0;
      v6 = (__int128 *)(v22 + 16 * v23 - 32);
      if ( v22 + 16 * v23 == 32 )
        v6 = &xmmword_26FBD0;
      v8 = v5;
      v9 = v6;
      if ( *((_QWORD *)v5 + 1) > 3uLL
        || *((_QWORD *)v6 + 1) > 3uLL
        || (LOBYTE(v5) = v23 == 2, v23 < 3 || v23 == 2 || v22 == 0) )
      {
        *(_QWORD *)&v18 = &v9;
        *((_QWORD *)&v18 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v19 = &v8;
        *((_QWORD *)&v19 + 1) = <&T as core::fmt::Display>::fmt;
        v10 = (__int64 *)&unk_2DF9390;
        v11 = (__int64 (__fastcall *)())(&dword_0 + 2);
        *(_QWORD *)&v13 = 0LL;
        *(_QWORD *)&v12 = &v18;
        *((_QWORD *)&v12 + 1) = 2LL;
        core::option::Option<T>::map_or_else(&v16, 0LL, v5, &v10);
      }
      else
      {
        v24 = v22 + 16 * (v23 - 3);
        v10 = &v24;
        v11 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v12 = &v9;
        *((_QWORD *)&v12 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v13 = &v8;
        *((_QWORD *)&v13 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v18 = &unk_2E010D8;
        *((_QWORD *)&v18 + 1) = 3LL;
        *(_QWORD *)&v20 = 0LL;
        *(_QWORD *)&v19 = &v10;
        *((_QWORD *)&v19 + 1) = 3LL;
        core::option::Option<T>::map_or_else(&v16, 0LL, v5, &v18);
      }
      *(_QWORD *)(a1 + 16) = v17;
      *(_OWORD *)a1 = v16;
      core::ptr::drop_in_place<alloc::vec::Vec<winit::platform_impl::linux::wayland::state::WindowCompositorUpdate>>(
        v21,
        v4);
      return core::ptr::drop_in_place<alloc::string::String>(a2);
    }
  }
  else
  {
    result = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 16) = result;
    *(_OWORD *)a1 = *(_OWORD *)a2;
  }
  return result;
}