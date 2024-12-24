__int64 __fastcall uu_cut::cut_bytes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  const char *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int8 v12; // [rsp+7h] [rbp-B1h] BYREF
  __int64 v13; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+10h] [rbp-A8h]
  __int64 v15; // [rsp+18h] [rbp-A0h] BYREF
  __int128 v16; // [rsp+20h] [rbp-98h] BYREF
  const char *v17; // [rsp+30h] [rbp-88h]
  __int64 v18; // [rsp+38h] [rbp-80h]
  __int64 v19; // [rsp+40h] [rbp-78h]
  char *v20; // [rsp+48h] [rbp-70h]
  _QWORD v21[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v22; // [rsp+60h] [rbp-58h] BYREF
  __int64 v23; // [rsp+68h] [rbp-50h]
  __int128 v24; // [rsp+90h] [rbp-28h] BYREF
  const char *v25; // [rsp+A0h] [rbp-18h]

  v21[0] = a2;
  v21[1] = a3;
  v5 = *(_BYTE *)(a4 + 40);
  v12 = v5;
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v22, 0x2000LL, a1);
  v13 = uu_cut::stdout_writer();
  v14 = v6;
  v7 = 1LL;
  if ( *(_QWORD *)a4 )
    v7 = *(_QWORD *)(a4 + 8);
  v8 = asc_1DD21;
  if ( *(_QWORD *)a4 )
    v8 = *(const char **)a4;
  *(_QWORD *)&v16 = v21;
  *((_QWORD *)&v16 + 1) = &v13;
  v17 = v8;
  v18 = v7;
  v19 = a4;
  v20 = (char *)&v12;
  v9 = bstr::io::BufReadExt::for_byte_record(&v22, v5, &v16);
  if ( v9 )
  {
    v15 = v9;
    <T as alloc::string::ToString>::to_string(&v24, &v15);
    LODWORD(v18) = 1;
    v16 = v24;
    v17 = v25;
    v10 = alloc::boxed::Box<T>::new(&v16);
    core::ptr::drop_in_place<std::io::error::Error>(v15);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Write>>(v13, v14);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v22, v23);
  }
  else
  {
    core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Write>>(v13, v14);
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>(v22, v23);
    return 0LL;
  }
  return v10;
}
