__int64 __fastcall uu_cp::Attributes::parse_iter(__int64 a1, __int128 *a2)
{
  __int128 v3; // xmm1
  __int64 *i; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // r15
  char v10; // bp
  char *v11; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // [rsp+8h] [rbp-160h] BYREF
  int v16; // [rsp+10h] [rbp-158h] BYREF
  __int64 v17; // [rsp+18h] [rbp-150h] BYREF
  int v18; // [rsp+20h] [rbp-148h]
  __int64 v19; // [rsp+28h] [rbp-140h] BYREF
  __int64 v20; // [rsp+30h] [rbp-138h]
  __int64 v21; // [rsp+38h] [rbp-130h]
  __int128 v22; // [rsp+40h] [rbp-128h] BYREF
  __int128 v23; // [rsp+50h] [rbp-118h]
  __int64 v24; // [rsp+60h] [rbp-108h] BYREF
  int v25; // [rsp+68h] [rbp-100h]
  __int64 v26; // [rsp+70h] [rbp-F8h] BYREF
  int v27; // [rsp+78h] [rbp-F0h]
  _BYTE v28[28]; // [rsp+80h] [rbp-E8h]
  _OWORD v29[2]; // [rsp+9Ch] [rbp-CCh]
  _QWORD v30[2]; // [rsp+C0h] [rbp-A8h] BYREF
  _QWORD v31[3]; // [rsp+D0h] [rbp-98h] BYREF
  char v32; // [rsp+E8h] [rbp-80h]
  __int128 v33; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v34; // [rsp+100h] [rbp-68h]
  _QWORD v35[12]; // [rsp+108h] [rbp-60h] BYREF

  v18 = 0;
  v17 = 0LL;
  v3 = a2[1];
  v22 = *a2;
  v23 = v3;
  for ( i = (__int64 *)*((_QWORD *)&v22 + 1);
        *((_QWORD *)&v22 + 1) != *((_QWORD *)&v23 + 1);
        i = (__int64 *)*((_QWORD *)&v22 + 1) )
  {
    *((_QWORD *)&v22 + 1) = i + 1;
    v5 = *i;
    if ( !v5 )
      break;
    v25 = v18;
    v24 = v17;
    v6 = *(_QWORD *)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v6, 1LL, 1LL, v7);
    alloc::str::<impl str>::to_lowercase(&v19, v6, v7);
    v8 = v20;
    if ( !v20 || v21 < 0 )
      core::panicking::panic_nounwind(anon_dd6310c77d121ecce151d075805ee620_20_llvm_1613436602710632571, 162LL);
    if ( v21 == 3 )
    {
      if ( *(_WORD *)v20 ^ 0x6C61 | *(unsigned __int8 *)(v20 + 2) ^ 0x6C )
      {
LABEL_10:
        v31[0] = 0LL;
        v31[1] = v20;
        v31[2] = v21;
        v32 = 1;
        v30[0] = v31;
        v30[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v35[0] = &off_181DE0;
        v35[1] = 1LL;
        v35[2] = v30;
        v35[3] = 1LL;
        v35[4] = 0LL;
        alloc::fmt::format::format_inner(&v33, v35);
        *(_OWORD *)v28 = v33;
        *(_QWORD *)&v28[16] = v34;
        v9 = 9LL;
        v10 = 0;
      }
      else
      {
        *(_QWORD *)v28 = 0x10101010101LL;
        *(_DWORD *)&v28[8] = 65793;
        v9 = 13LL;
        v10 = 1;
      }
      if ( v19 )
        _rust_dealloc(v20, v19, 1LL);
      if ( !v10 )
      {
        *(_QWORD *)a1 = v9;
        *(_QWORD *)(a1 + 8) = *(_QWORD *)v28;
        *(_DWORD *)(a1 + 16) = *(_DWORD *)&v28[8];
        v13 = v29[0];
        v14 = *(_OWORD *)((char *)v29 + 12);
        *(_OWORD *)(a1 + 20) = *(_OWORD *)&v28[12];
        *(_OWORD *)(a1 + 36) = v13;
        *(_OWORD *)(a1 + 48) = v14;
        <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v22);
        return a1;
      }
    }
    else
    {
      v16 = 0;
      v15 = 0LL;
      switch ( v21 )
      {
        case 4LL:
          v11 = (char *)&v15 + 2;
          if ( *(_DWORD *)v20 == 1701080941 )
            goto LABEL_26;
          v11 = (char *)&v16;
          if ( *(_DWORD *)v20 == 1802398060 )
            goto LABEL_26;
          goto LABEL_10;
        case 5LL:
          v11 = (char *)&v16;
          if ( !(*(_DWORD *)v20 ^ 0x6B6E696C | *(unsigned __int8 *)(v20 + 4) ^ 0x73) )
            goto LABEL_26;
          v11 = (char *)&v16 + 2;
          if ( !(*(_DWORD *)v20 ^ 0x74746178 | *(unsigned __int8 *)(v20 + 4) ^ 0x72) )
            goto LABEL_26;
          goto LABEL_10;
        case 7LL:
          v11 = (char *)&v15 + 6;
          if ( !(*(_DWORD *)v20 ^ 0x746E6F63 | *(_DWORD *)(v20 + 3) ^ 0x74786574) )
            goto LABEL_26;
          goto LABEL_10;
        case 9LL:
          v11 = (char *)&v15;
          if ( !(*(_QWORD *)v20 ^ 0x69687372656E776FLL | *(unsigned __int8 *)(v20 + 8) ^ 0x70LL) )
            goto LABEL_26;
          goto LABEL_10;
        case 10LL:
          v11 = (char *)&v15 + 4;
          if ( *(_QWORD *)v20 ^ 0x6D617473656D6974LL | *(unsigned __int16 *)(v20 + 8) ^ 0x7370LL )
            goto LABEL_10;
LABEL_26:
          *(_WORD *)v11 = 257;
          *(_DWORD *)&v28[8] = v16;
          *(_QWORD *)v28 = v15;
          if ( v19 )
            _rust_dealloc(v8, v19, 1LL);
          break;
        default:
          goto LABEL_10;
      }
    }
    v27 = *(_DWORD *)&v28[8];
    v26 = *(_QWORD *)v28;
    uu_cp::Attributes::union((char *)&v17, &v24, (char *)&v26);
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v22);
  *(_DWORD *)(a1 + 16) = v18;
  *(_QWORD *)(a1 + 8) = v17;
  *(_QWORD *)a1 = 13LL;
  return a1;
}
