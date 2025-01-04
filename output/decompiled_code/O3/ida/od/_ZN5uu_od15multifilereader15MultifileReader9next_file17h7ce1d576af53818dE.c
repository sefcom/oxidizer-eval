__int64 (__fastcall **__fastcall uu_od::multifilereader::MultifileReader::next_file(__int64 a1))()
{
  __int64 v1; // rbp
  __int64 v2; // r12
  __int64 v3; // rdx
  __int64 (__fastcall **result)(); // rax
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // [rsp+8h] [rbp-D0h] BYREF
  void *v11; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+18h] [rbp-C0h]
  __int64 **v13; // [rsp+20h] [rbp-B8h]
  __int64 v14; // [rsp+28h] [rbp-B0h]
  __int64 v15; // [rsp+30h] [rbp-A8h]
  __int64 v16; // [rsp+40h] [rbp-98h] BYREF
  __int64 v17; // [rsp+48h] [rbp-90h]
  __int64 v18; // [rsp+50h] [rbp-88h]
  _DWORD v19[2]; // [rsp+58h] [rbp-80h] BYREF
  __int64 v20; // [rsp+60h] [rbp-78h]
  __int64 v21; // [rsp+68h] [rbp-70h] BYREF
  __int64 v22; // [rsp+70h] [rbp-68h]
  __int64 v23; // [rsp+78h] [rbp-60h]
  char v24; // [rsp+80h] [rbp-58h]
  __int64 *v25; // [rsp+88h] [rbp-50h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+90h] [rbp-48h]
  __int64 *v27; // [rsp+98h] [rbp-40h]
  __int64 (__fastcall *v28)(); // [rsp+A0h] [rbp-38h]

  if ( *(_QWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      alloc::vec::Vec<T,A>::remove(&v16, a1, 0LL, &off_1431A8);
      if ( v16 )
        break;
      v1 = v17;
      v2 = v18;
      std::fs::File::open(v19, v17, v18);
      if ( !v19[0] )
      {
        std::io::buffered::bufreader::BufReader<R>::with_capacity(&v11, 0x2000LL, v19[1]);
        v9 = alloc::boxed::Box<T>::new(&v11);
        core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>(
          *(_QWORD *)(a1 + 24),
          *(_QWORD *)(a1 + 32));
        *(_QWORD *)(a1 + 24) = v9;
        result = &off_1431C0;
        goto LABEL_10;
      }
      v10 = v20;
      v21 = uucore::util_name();
      v22 = v3;
      v25 = &v21;
      v26 = <&T as core::fmt::Display>::fmt;
      v11 = &unk_143158;
      v12 = 2LL;
      v15 = 0LL;
      v13 = &v25;
      v14 = 1LL;
      std::io::stdio::_eprint(&v11);
      v21 = 0LL;
      v22 = v1;
      v23 = v2;
      v24 = 0;
      v25 = &v21;
      v26 = <os_display::Quoted as core::fmt::Display>::fmt;
      v27 = &v10;
      v28 = <std::io::error::Error as core::fmt::Display>::fmt;
      v11 = &unk_143178;
      v12 = 3LL;
      v15 = 0LL;
      v13 = &v25;
      v14 = 2LL;
      std::io::stdio::_eprint(&v11);
      *(_BYTE *)(a1 + 40) = 1;
      core::ptr::drop_in_place<std::io::error::Error>(v10);
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_5;
    }
    if ( (_DWORD)v16 != 1 )
    {
      v7 = v17;
      v8 = v18;
      result = (__int64 (__fastcall **)())core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>(
                                            *(_QWORD *)(a1 + 24),
                                            *(_QWORD *)(a1 + 32));
      *(_QWORD *)(a1 + 24) = v7;
      *(_QWORD *)(a1 + 32) = v8;
      return result;
    }
    v5 = std::io::stdio::stdin();
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v11, 0x2000LL, v5);
    v6 = alloc::boxed::Box<T>::new(&v11);
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>(
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 32));
    *(_QWORD *)(a1 + 24) = v6;
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
