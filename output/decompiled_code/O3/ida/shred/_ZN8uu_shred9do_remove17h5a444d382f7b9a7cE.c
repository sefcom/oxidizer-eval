__int64 __fastcall uu_shred::do_remove(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned __int8 a6)
{
  unsigned __int8 v7; // bp
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int128 v16; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+10h] [rbp-B8h]
  void *v18; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+20h] [rbp-A8h]
  __int64 **v20; // [rsp+28h] [rbp-A0h]
  __int64 v21; // [rsp+30h] [rbp-98h]
  __int64 v22; // [rsp+38h] [rbp-90h]
  __int64 v23; // [rsp+48h] [rbp-80h] BYREF
  __int64 v24; // [rsp+50h] [rbp-78h]
  __int64 v25; // [rsp+58h] [rbp-70h]
  char v26; // [rsp+60h] [rbp-68h]
  __int64 *v27; // [rsp+68h] [rbp-60h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+70h] [rbp-58h]
  __int64 v29; // [rsp+78h] [rbp-50h]
  __int128 v30; // [rsp+80h] [rbp-48h] BYREF
  __int64 v31; // [rsp+90h] [rbp-38h]

  v7 = a5;
  v10 = a2;
  if ( a5 )
  {
    v29 = a2;
    v23 = uucore::util_name();
    v24 = v11;
    *(_QWORD *)&v16 = &v23;
    *((_QWORD *)&v16 + 1) = <&T as core::fmt::Display>::fmt;
    v18 = &unk_137BF0;
    v19 = 2LL;
    v22 = 0LL;
    v20 = (__int64 **)&v16;
    v21 = 1LL;
    std::io::stdio::_eprint(&v18);
    v23 = 0LL;
    v24 = a3;
    v25 = a4;
    v26 = 0;
    *(_QWORD *)&v16 = &v23;
    *((_QWORD *)&v16 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    v18 = &unk_137E80;
    v19 = 2LL;
    v22 = 0LL;
    v20 = (__int64 **)&v16;
    v21 = 1LL;
    std::io::stdio::_eprint(&v18);
    v10 = v29;
  }
  if ( a6 == 1 )
    std::path::Path::with_file_name(&v16, a1, v10, a3, a4);
  else
    uu_shred::wipe_name((__int64)&v16, a1, v10, v7, a6);
  v12 = v16;
  if ( (_QWORD)v16 == 0x8000000000000000LL || (v31 = v17, v30 = v16, (result = std::fs::remove_file(&v30)) == 0) )
  {
    v14 = v12;
    if ( v7 )
    {
      v23 = uucore::util_name();
      v24 = v15;
      v27 = &v23;
      v28 = <&T as core::fmt::Display>::fmt;
      v18 = &unk_137BF0;
      v19 = 2LL;
      v22 = 0LL;
      v20 = &v27;
      v21 = 1LL;
      std::io::stdio::_eprint(&v18);
      v23 = 0LL;
      v24 = a3;
      v25 = a4;
      v26 = 0;
      v27 = &v23;
      v28 = <os_display::Quoted as core::fmt::Display>::fmt;
      v18 = &unk_137EA0;
      v19 = 2LL;
      v22 = 0LL;
      v20 = &v27;
      v21 = 1LL;
      std::io::stdio::_eprint(&v18);
      v14 = v16;
    }
    if ( v12 == 0x8000000000000000LL && v14 != 0x8000000000000000LL )
      core::ptr::drop_in_place<std::path::PathBuf>(&v16);
    return 0LL;
  }
  return result;
}
