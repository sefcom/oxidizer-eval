__int64 (__fastcall **__fastcall uu_od::multifilereader::MultifileReader::next_file(__int64 a1, double a2))()
{
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 (__fastcall **result)(); // rax
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r15
  __int64 v11; // [rsp+8h] [rbp-D0h] BYREF
  void *v12; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+18h] [rbp-C0h]
  __int64 **v14; // [rsp+20h] [rbp-B8h]
  __int64 v15; // [rsp+28h] [rbp-B0h]
  __int64 v16; // [rsp+30h] [rbp-A8h]
  __int64 v17; // [rsp+40h] [rbp-98h] BYREF
  __int64 v18; // [rsp+48h] [rbp-90h]
  __int64 v19; // [rsp+50h] [rbp-88h]
  _DWORD v20[2]; // [rsp+58h] [rbp-80h] BYREF
  __int64 v21; // [rsp+60h] [rbp-78h]
  __int64 v22; // [rsp+68h] [rbp-70h] BYREF
  __int64 v23; // [rsp+70h] [rbp-68h]
  __int64 v24; // [rsp+78h] [rbp-60h]
  char v25; // [rsp+80h] [rbp-58h]
  __int64 *v26; // [rsp+88h] [rbp-50h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+90h] [rbp-48h]
  __int64 *v28; // [rsp+98h] [rbp-40h]
  __int64 (__fastcall *v29)(); // [rsp+A0h] [rbp-38h]

  if ( *(_QWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      alloc::vec::Vec<T,A>::remove(&v17, a1, 0LL, &off_1431A8);
      if ( v17 )
        break;
      v2 = v18;
      v3 = v19;
      std::fs::File::open(v20, v18, v19);
      if ( !v20[0] )
      {
        std::io::buffered::bufreader::BufReader<R>::with_capacity(&v12, 0x2000LL, v20[1]);
        v10 = alloc::boxed::Box<T>::new(&v12);
        core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>(
          *(_QWORD *)(a1 + 24),
          *(_QWORD *)(a1 + 32));
        *(_QWORD *)(a1 + 24) = v10;
        result = &off_1431C0;
        goto LABEL_10;
      }
      v11 = v21;
      v22 = uucore::util_name(a2);
      v23 = v4;
      v26 = &v22;
      v27 = <&T as core::fmt::Display>::fmt;
      v12 = &unk_143158;
      v13 = 2LL;
      v16 = 0LL;
      v14 = &v26;
      v15 = 1LL;
      std::io::stdio::_eprint(&v12);
      v22 = 0LL;
      v23 = v2;
      v24 = v3;
      v25 = 0;
      v26 = &v22;
      v27 = <os_display::Quoted as core::fmt::Display>::fmt;
      v28 = &v11;
      v29 = <std::io::error::Error as core::fmt::Display>::fmt;
      v12 = &unk_143178;
      v13 = 3LL;
      v16 = 0LL;
      v14 = &v26;
      v15 = 2LL;
      std::io::stdio::_eprint(&v12);
      *(_BYTE *)(a1 + 40) = 1;
      core::ptr::drop_in_place<std::io::error::Error>(v11);
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_5;
    }
    if ( (_DWORD)v17 != 1 )
    {
      v8 = v18;
      v9 = v19;
      result = (__int64 (__fastcall **)())core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>(
                                            *(_QWORD *)(a1 + 24),
                                            *(_QWORD *)(a1 + 32));
      *(_QWORD *)(a1 + 24) = v8;
      *(_QWORD *)(a1 + 32) = v9;
      return result;
    }
    v6 = std::io::stdio::stdin(a2);
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v12, 0x2000LL, v6);
    v7 = alloc::boxed::Box<T>::new(&v12);
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>(
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 32));
    *(_QWORD *)(a1 + 24) = v7;
    result = &off_143218;
LABEL_10:
    *(_QWORD *)(a1 + 32) = result;
  }
  else
  {
LABEL_5:
    result = (__int64 (__fastcall **)())core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>(
                                          *(_QWORD *)(a1 + 24),
                                          *(_QWORD *)(a1 + 32));
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
