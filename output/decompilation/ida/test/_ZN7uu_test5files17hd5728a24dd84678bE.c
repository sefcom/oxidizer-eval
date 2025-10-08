char __fastcall uu_test::files(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  char result; // al
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // r14
  unsigned int v12; // edx
  unsigned int v13; // ebp
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // r14
  unsigned int v17; // edx
  unsigned int v18; // ebp
  __int64 v19; // rax
  unsigned int v20; // edx
  _QWORD dest[22]; // [rsp+8h] [rbp-450h] BYREF
  _QWORD v22[22]; // [rsp+B8h] [rbp-3A0h] BYREF
  _QWORD v23[22]; // [rsp+168h] [rbp-2F0h] BYREF
  _QWORD v24[22]; // [rsp+218h] [rbp-240h] BYREF
  _BYTE src[176]; // [rsp+2C8h] [rbp-190h] BYREF
  _BYTE v26[224]; // [rsp+378h] [rbp-E0h] BYREF

  std::fs::metadata(src);
  std::fs::metadata(v26);
  memcpy(dest, src, sizeof(dest));
  memcpy(v22, v26, sizeof(v22));
  if ( LODWORD(dest[0]) == 2 || v22[0] == 2LL )
  {
    result = core::ptr::drop_in_place<(core::result::Result<std::fs::Metadata,std::io::error::Error>,core::result::Result<std::fs::Metadata,std::io::error::Error>)>(dest);
    *(_BYTE *)(a1 + 8) = 0;
  }
  else
  {
    memcpy(v23, dest, sizeof(v23));
    memcpy(v24, v22, sizeof(v24));
    core::ptr::drop_in_place<(core::result::Result<std::fs::Metadata,std::io::error::Error>,core::result::Result<std::fs::Metadata,std::io::error::Error>)>(dest);
    core::str::converts::from_utf8(dest, a6, a7);
    if ( LODWORD(dest[0]) == 1 )
    {
LABEL_4:
      dest[0] = 1LL;
      dest[1] = a6;
      dest[2] = a7;
      LOBYTE(dest[3]) = 1;
      result = <T as alloc::string::SpecToString>::spec_to_string(a1 + 8, dest);
      *(_QWORD *)a1 = 4LL;
      return result;
    }
    v9 = dest[1];
    v10 = dest[2];
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(dest[1], dest[2], aEf, 3LL) )
    {
      result = v23[5] == v24[5] && v23[4] == v24[4];
    }
    else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, aNt, 3LL) )
    {
      std::fs::Metadata::modified(dest, v23);
      v11 = core::result::Result<T,E>::unwrap(dest, &off_E0410);
      v13 = v12;
      std::fs::Metadata::modified(dest, v24);
      v14 = core::result::Result<T,E>::unwrap(dest, &off_E0428);
      if ( v11 == v14 )
        result = v13 > v15;
      else
        result = v11 > v14;
    }
    else
    {
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, aOt, 3LL) )
        goto LABEL_4;
      std::fs::Metadata::modified(dest, v23);
      v16 = core::result::Result<T,E>::unwrap(dest, &off_E03E0);
      v18 = v17;
      std::fs::Metadata::modified(dest, v24);
      v19 = core::result::Result<T,E>::unwrap(dest, &off_E03F8);
      if ( v16 == v19 )
        result = v18 < v20;
      else
        result = v16 < v19;
    }
    *(_BYTE *)(a1 + 8) = result;
  }
  *(_QWORD *)a1 = 7LL;
  return result;
}