__int64 __fastcall uu_cp::copydir::path_has_prefix(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // [rsp+8h] [rbp-70h] BYREF
  __int64 v11; // [rsp+10h] [rbp-68h]
  __int64 v12; // [rsp+18h] [rbp-60h]
  _QWORD v13[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v14[8]; // [rsp+38h] [rbp-40h] BYREF

  uucore::features::fs::canonicalize(&v10, a2, a3, 0LL, 2LL);
  result = v10;
  v8 = v11;
  if ( __OFSUB__(-v10, 1LL) )
  {
    *(_QWORD *)(a1 + 8) = v11;
    *(_BYTE *)a1 = 1;
  }
  else
  {
    v9 = v12;
    v13[0] = v10;
    v13[1] = v11;
    v13[2] = v12;
    uucore::features::fs::canonicalize(&v10, a4, a5, 0LL, 2LL);
    if ( v10 == 0x8000000000000000LL )
    {
      *(_QWORD *)(a1 + 8) = v11;
      *(_BYTE *)a1 = 1;
    }
    else
    {
      v14[0] = v10;
      v14[1] = v11;
      v14[2] = v12;
      *(_BYTE *)(a1 + 1) = std::path::Path::starts_with(v8, v9, v14);
      *(_BYTE *)a1 = 0;
    }
    return core::ptr::drop_in_place<std::path::PathBuf>(v13);
  }
  return result;
}