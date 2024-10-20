__int64 __fastcall uu_ls::sort_entries::{{closure}}(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  size_t v5; // rdx
  const void *v6; // r15
  size_t v7; // r12
  const void *v8; // rax
  size_t v9; // rdx
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rax
  size_t v13; // rdx
  const void *v14; // r14
  size_t v15; // r15
  const void *v16; // rax
  size_t v17; // rdx
  __int64 v18; // rbx
  int v19; // eax
  __int64 result; // rax

  if ( !*(_QWORD *)(a2 + 32) )
    goto LABEL_30;
  if ( *(__int64 *)(a2 + 40) < 0 )
    goto LABEL_30;
  v4 = std::path::Path::extension();
  if ( !*(_QWORD *)(a3 + 32) || *(__int64 *)(a3 + 40) < 0 )
    goto LABEL_30;
  v6 = (const void *)v4;
  v7 = v5;
  v8 = (const void *)std::path::Path::extension();
  if ( v6 )
  {
    if ( v8 )
    {
      v10 = v7 - v9;
      if ( v7 < v9 )
        v9 = v7;
      v11 = memcmp(v6, v8, v9);
      if ( v11 )
        v10 = v11;
      LOBYTE(v10) = (v10 > 0) + (v10 >> 63);
    }
    else
    {
      LOBYTE(v10) = 1;
    }
  }
  else
  {
    LODWORD(v10) = -(v8 != 0LL);
  }
  if ( !*(_QWORD *)(a2 + 32)
    || *(__int64 *)(a2 + 40) < 0
    || (v12 = std::path::Path::file_stem(), !*(_QWORD *)(a3 + 32))
    || *(__int64 *)(a3 + 40) < 0 )
  {
LABEL_30:
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
  }
  v14 = (const void *)v12;
  v15 = v13;
  v16 = (const void *)std::path::Path::file_stem();
  if ( v14 )
  {
    if ( v16 )
    {
      v18 = v15 - v17;
      if ( v15 < v17 )
        v17 = v15;
      v19 = memcmp(v14, v16, v17);
      if ( v19 )
        v18 = v19;
      LOBYTE(v18) = (v18 > 0) + (v18 >> 63);
    }
    else
    {
      LOBYTE(v18) = 1;
    }
  }
  else
  {
    LODWORD(v18) = -(v16 != 0LL);
  }
  result = (unsigned __int8)v10;
  if ( !(_BYTE)v10 )
    return (unsigned __int8)v18;
  return result;
}
