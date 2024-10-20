        __int64 a9)
{
  __int64 v11; // r12
  __int64 result; // rax
  __int64 v13; // rbp
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rbx
  char v21; // [rsp+3h] [rbp-65h] BYREF
  int v22; // [rsp+4h] [rbp-64h]
  __int64 v23; // [rsp+8h] [rbp-60h] BYREF
  __int64 v24; // [rsp+10h] [rbp-58h]
  __int64 v25; // [rsp+18h] [rbp-50h]
  __int64 v26; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27; // [rsp+28h] [rbp-40h]
  __int64 v28; // [rsp+30h] [rbp-38h]

  uucore::features::fs::canonicalize(&v23, a1, a2, a5, a4);
  v11 = v23;
  result = v24;
  if ( v23 == 0x8000000000000000LL )
    return result;
  v22 = a3;
  v13 = a8;
  v15 = v25;
  if ( a8 )
  {
    v16 = v24;
    if ( (unsigned __int8)std::path::Path::_starts_with(v24, v25, a8, a9) )
    {
      v23 = v11;
      v24 = v16;
      v25 = v15;
      if ( a6 )
        v13 = a6;
      else
        a7 = a9;
      v17 = v13;
      goto LABEL_10;
    }
    v26 = v11;
    v27 = v16;
LABEL_13:
    v28 = v15;
    goto LABEL_14;
  }
  if ( !a6 )
  {
    v26 = v23;
    v27 = v24;
    goto LABEL_13;
  }
  v17 = a6;
LABEL_10:
  uucore::features::fs::make_path_relative_to(&v26, &v23, v17, a7);
LABEL_14:
  v23 = std::io::stdio::stdout();
  v18 = v27;
  result = <std::io::stdio::Stdout as std::io::Write>::write_all(&v23, v27, v28);
  if ( v26 )
  {
    v19 = v18;
    v20 = result;
    _rust_dealloc(v19, v26, 1LL);
    result = v20;
  }
  if ( !result )
  {
    v23 = std::io::stdio::stdout();
    v21 = v22;
    return <std::io::stdio::Stdout as std::io::Write>::write_all(&v23, &v21, 1LL);
  }
  return result;
}
