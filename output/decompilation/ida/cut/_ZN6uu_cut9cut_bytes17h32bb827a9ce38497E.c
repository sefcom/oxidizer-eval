__int64 __fastcall uu_cut::cut_bytes(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // ebp
  __int64 v7; // rcx
  const char *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  char v12; // [rsp+7h] [rbp-B1h] BYREF
  __int64 v13; // [rsp+8h] [rbp-B0h] BYREF
  __int128 v14; // [rsp+10h] [rbp-A8h] BYREF
  const char *v15; // [rsp+20h] [rbp-98h]
  __int64 v16; // [rsp+28h] [rbp-90h]
  __int64 v17; // [rsp+30h] [rbp-88h]
  char *v18; // [rsp+38h] [rbp-80h]
  _QWORD v19[2]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v20; // [rsp+50h] [rbp-68h] BYREF
  const char *v21; // [rsp+60h] [rbp-58h]
  _BYTE v22[80]; // [rsp+68h] [rbp-50h] BYREF

  v19[0] = a3;
  v19[1] = a4;
  v6 = *(_DWORD *)(a5 + 40);
  v12 = v6;
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v22, a1);
  v7 = 1LL;
  if ( *(_QWORD *)a5 )
    v7 = *(_QWORD *)(a5 + 8);
  v8 = asc_1EC79;
  if ( *(_QWORD *)a5 )
    v8 = *(const char **)a5;
  *(_QWORD *)&v14 = v19;
  *((_QWORD *)&v14 + 1) = a2;
  v15 = v8;
  v16 = v7;
  v17 = a5;
  v18 = &v12;
  v9 = bstr::io::BufReadExt::for_byte_record(v22, v6, &v14);
  if ( v9 )
  {
    v13 = v9;
    <T as alloc::string::SpecToString>::spec_to_string(&v20, &v13);
    LODWORD(v16) = 1;
    v14 = v20;
    v15 = v21;
    v10 = alloc::boxed::Box<T>::new(&v14);
    core::ptr::drop_in_place<std::io::error::Error>(v13);
  }
  else
  {
    v10 = 0LL;
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0LL);
  }
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(v22);
  return v10;
}