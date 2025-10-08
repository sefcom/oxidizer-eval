__int64 __fastcall uu_head::uu_head(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // rbp
  __int64 v4; // r12
  char v5; // cl
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rdi
  char v20; // [rsp+2h] [rbp-D6h]
  char v21; // [rsp+3h] [rbp-D5h]
  unsigned int v22; // [rsp+4h] [rbp-D4h] BYREF
  unsigned int *v23; // [rsp+8h] [rbp-D0h]
  __int64 *v24; // [rsp+10h] [rbp-C8h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+18h] [rbp-C0h]
  __int64 *v26; // [rsp+20h] [rbp-B8h]
  __int64 (__fastcall *v27)(); // [rsp+28h] [rbp-B0h]
  char **v28; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-A0h]
  __int64 **v30; // [rsp+40h] [rbp-98h]
  __int128 v31; // [rsp+48h] [rbp-90h]
  __int64 v32; // [rsp+60h] [rbp-78h]
  __int64 v33; // [rsp+68h] [rbp-70h] BYREF
  __int64 v34; // [rsp+70h] [rbp-68h] BYREF
  __int64 v35; // [rsp+78h] [rbp-60h] BYREF
  __int64 v36; // [rsp+80h] [rbp-58h]
  _DWORD v37[2]; // [rsp+88h] [rbp-50h] BYREF
  __int64 v38; // [rsp+90h] [rbp-48h]
  _QWORD v39[8]; // [rsp+98h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  if ( !v1 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = v2 + 24 * v1;
  v4 = v2 + 24;
  v21 = *(_BYTE *)(a1 + 42);
  v5 = *(_BYTE *)(a1 + 40);
  v32 = a1;
  v20 = *(_BYTE *)(a1 + 41) | (v1 != 1) & (v5 ^ 1);
  v6 = 1;
  v23 = &v22;
  while ( 1 )
  {
    if ( !v21 )
    {
      v7 = v4;
      v4 = v2;
      while ( 1 )
      {
        v8 = *(_QWORD *)(v4 + 8);
        v9 = *(_QWORD *)(v4 + 16);
        v4 = v7;
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, asc_1B366, 1LL) )
          break;
        v35 = v8;
        v36 = v9;
        std::fs::File::open(v37, v8, v9);
        if ( v37[0] != 1 )
        {
          v22 = v37[1];
          if ( (v20 & 1) != 0 )
          {
            if ( (v6 & 1) == 0 )
            {
              v28 = (char **)&off_F79D0;
              v29 = 1LL;
              v30 = (__int64 **)&byte_8;
              v31 = 0LL;
              std::io::stdio::_print(&v28);
            }
            v24 = &v35;
            v25 = <&T as core::fmt::Display>::fmt;
            v28 = &off_F7D88;
            v29 = 2LL;
            v30 = &v24;
            v31 = 1uLL;
            std::io::stdio::_print(&v28);
          }
          if ( (uu_head::head_file((__int64)&v22, v32) & 1) == 0 )
          {
            v34 = 0LL;
            core::ptr::drop_in_place<std::fs::File>(v22);
            goto LABEL_25;
          }
          v17 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
          v18 = v22;
          goto LABEL_29;
        }
        v33 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                v38,
                v35,
                v36);
        uucore::mods::error::set_exit_code(1LL);
        v39[0] = uucore::util_name();
        v39[1] = v10;
        v24 = v39;
        v25 = <&T as core::fmt::Display>::fmt;
        v26 = &v33;
        v27 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v28 = (char **)&unk_F7D58;
        v29 = 3LL;
        v30 = &v24;
        v31 = 2uLL;
        std::io::stdio::_eprint(&v28);
        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v33);
        v7 = v4 + 24;
        if ( v4 == v3 )
          return 0LL;
      }
    }
    if ( (v20 & 1) != 0 )
    {
      if ( (v6 & 1) == 0 )
      {
        v28 = (char **)&off_F79D0;
        v29 = 1LL;
        v30 = (__int64 **)&byte_8;
        v31 = 0LL;
        std::io::stdio::_print(&v28);
      }
      v28 = &off_F7D48;
      v29 = 1LL;
      v30 = (__int64 **)&byte_8;
      v31 = 0LL;
      std::io::stdio::_print(&v28);
    }
    std::io::stdio::stdin();
    LODWORD(v24) = 0;
    v11 = <std::fs::File as std::io::Seek>::stream_position(&v24);
    v13 = v12;
    v28 = (char **)v11;
    v29 = v12;
    if ( (v11 & 1) != 0 )
    {
      v14 = uu_head::head_file((__int64)&v24, v32);
    }
    else
    {
      if ( (uu_head::head_file((__int64)&v24, v32) & 1) != 0 )
        break;
      v14 = <std::fs::File as std::io::Seek>::seek(&v24, 0LL, v15 + v13);
    }
    if ( (v14 & 1) != 0 )
      break;
    core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v28);
    core::ptr::drop_in_place<std::fs::File>((unsigned int)v24);
    v34 = 0LL;
LABEL_25:
    v2 = v4;
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v34);
    v4 += 24LL;
    v6 = 0;
    if ( v2 == v3 )
      return 0LL;
  }
  v17 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
  core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v28);
  v18 = (unsigned int)v24;
LABEL_29:
  core::ptr::drop_in_place<std::fs::File>(v18);
  return v17;
}