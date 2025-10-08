__int64 __fastcall rg::types(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r15
  _QWORD *v3; // r12
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rax
  char *v12; // rcx
  char v13; // al
  int v14; // [rsp+Ch] [rbp-7Ch]
  _BYTE v15[112]; // [rsp+18h] [rbp-70h] BYREF

  rg::flags::hiargs::HiArgs::stdout((__int64)v15, (_BYTE *)a2);
  v2 = *(_QWORD **)(a2 + 504);
  v3 = &v2[6 * *(_QWORD *)(a2 + 512)];
  v14 = 0;
  do
  {
    v4 = v2 + 6;
    if ( v2 == v3 )
    {
      v12 = (char *)a1;
      *(_BYTE *)(a1 + 1) = v14 == 0;
      v13 = 0;
      goto LABEL_15;
    }
    v5 = std::io::Write::write_all(v15, v2[1], v2[2]);
    if ( v5 )
      break;
    v5 = std::io::Write::write_all(v15, asc_66AE7, 2LL);
    if ( v5 )
      break;
    v6 = v2[5];
    if ( v6 )
    {
      v7 = v2[4];
      v5 = std::io::Write::write_all(v15, *(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 16));
      if ( v5 )
        break;
      v8 = v7 + 24;
      v9 = v7 + 24 * v6;
      while ( v8 != v9 )
      {
        v5 = std::io::Write::write_all(v15, asc_78D33, 2LL);
        if ( !v5 )
        {
          v5 = std::io::Write::write_all(v15, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
          v8 += 24LL;
          if ( !v5 )
            continue;
        }
        goto LABEL_14;
      }
    }
    v5 = std::io::Write::write_all(v15, asc_66865, 1LL);
    ++v14;
    v2 = v4;
  }
  while ( !v5 );
LABEL_14:
  v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v5);
  v12 = (char *)a1;
  *(_QWORD *)(a1 + 8) = v10;
  v13 = 1;
LABEL_15:
  *v12 = v13;
  return core::ptr::drop_in_place<grep_cli::wtr::StandardStream>(v15);
}