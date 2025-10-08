__int64 (__fastcall **__fastcall uu_od::multifilereader::MultifileReader::next_file(__int64 a1))()
{
  __int128 v1; // kr00_16
  __int64 v2; // rdx
  __int64 (__fastcall **result)(); // rax
  __int64 v4; // r15
  __int64 v5; // [rsp+0h] [rbp-E8h] BYREF
  _BYTE v6[4]; // [rsp+8h] [rbp-E0h] BYREF
  unsigned int v7; // [rsp+Ch] [rbp-DCh]
  __int64 v8; // [rsp+10h] [rbp-D8h]
  __int64 v9; // [rsp+18h] [rbp-D0h] BYREF
  __int128 v10; // [rsp+20h] [rbp-C8h]
  char v11; // [rsp+30h] [rbp-B8h]
  void *v12; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-A8h]
  __int64 **v14; // [rsp+48h] [rbp-A0h]
  __int64 v15; // [rsp+50h] [rbp-98h]
  __int64 v16; // [rsp+58h] [rbp-90h]
  __int64 *v17; // [rsp+68h] [rbp-80h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+70h] [rbp-78h]
  __int64 *v19; // [rsp+78h] [rbp-70h]
  __int64 (__fastcall *v20)(); // [rsp+80h] [rbp-68h]
  __int64 v21; // [rsp+88h] [rbp-60h] BYREF
  __int128 v22; // [rsp+90h] [rbp-58h]
  __int128 v23; // [rsp+A0h] [rbp-48h]

  if ( *(_QWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      alloc::vec::Vec<T,A>::remove(&v21, a1);
      if ( v21 )
        break;
      v1 = v22;
      std::fs::File::open(v6, v22, *((_QWORD *)&v22 + 1));
      if ( (v6[0] & 1) == 0 )
      {
        v4 = alloc::boxed::Box<T>::new(v7);
        core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>(
          *(_QWORD *)(a1 + 24),
          *(_QWORD *)(a1 + 32));
        goto LABEL_10;
      }
      v5 = v8;
      v9 = uucore::util_name();
      *(_QWORD *)&v10 = v2;
      v17 = &v9;
      v18 = <&T as core::fmt::Display>::fmt;
      v12 = &unk_102438;
      v13 = 2LL;
      v16 = 0LL;
      v14 = &v17;
      v15 = 1LL;
      std::io::stdio::_eprint(&v12);
      v9 = 0LL;
      v10 = v1;
      v11 = 0;
      v17 = &v9;
      v18 = <os_display::Quoted as core::fmt::Display>::fmt;
      v19 = &v5;
      v20 = <std::io::error::Error as core::fmt::Display>::fmt;
      v12 = &unk_102458;
      v13 = 3LL;
      v16 = 0LL;
      v14 = &v17;
      v15 = 2LL;
      std::io::stdio::_eprint(&v12);
      *(_BYTE *)(a1 + 40) = 1;
      core::ptr::drop_in_place<std::io::error::Error>(v5);
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_5;
    }
    if ( (_DWORD)v21 != 1 )
    {
      v23 = v22;
      result = (__int64 (__fastcall **)())core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>(
                                            *(_QWORD *)(a1 + 24),
                                            *(_QWORD *)(a1 + 32));
      *(_OWORD *)(a1 + 24) = v23;
      return result;
    }
    std::io::stdio::stdin();
    v4 = alloc::boxed::Box<T>::new(0LL);
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::Read>>>(
      *(_QWORD *)(a1 + 24),
      *(_QWORD *)(a1 + 32));
LABEL_10:
    *(_QWORD *)(a1 + 24) = v4;
    result = &off_1024A0;
    *(_QWORD *)(a1 + 32) = &off_1024A0;
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