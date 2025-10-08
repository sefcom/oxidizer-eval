__int64 __fastcall uu_cp::copy_helper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        __int64 a11,
        char a12)
{
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 result; // rax
  int v19; // eax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int16 v24; // [rsp+0h] [rbp-78h]
  char v25; // [rsp+2h] [rbp-76h]
  __int16 v26; // [rsp+4h] [rbp-74h] BYREF
  char v27; // [rsp+6h] [rbp-72h]
  __int64 v28; // [rsp+8h] [rbp-70h]
  _BYTE v29[56]; // [rsp+10h] [rbp-68h] BYREF

  v28 = a3;
  v15 = 0x800000000000000CLL;
  if ( *(_BYTE *)(a6 + 92) )
  {
    v16 = std::path::Path::parent(a4, a5);
    if ( !v16 )
    {
      v17 = a5;
      v16 = a4;
    }
    result = std::fs::create_dir_all(v16, v17);
    if ( result )
    {
      *(_QWORD *)a1 = 0x8000000000000001LL;
      *(_QWORD *)(a1 + 8) = result;
      return result;
    }
  }
  if ( a5 )
  {
    v19 = *(unsigned __int8 *)(a4 + a5 - 1);
    if ( (v19 == 47 || v19 == 92) && !(unsigned __int8)std::path::Path::is_dir(a4, a5) )
    {
      result = std::path::Path::to_path_buf(a1 + 8, a4);
      v15 = 0x800000000000000BLL;
      goto LABEL_21;
    }
  }
  if ( !a10 || *(_BYTE *)(a6 + 94) != 1 || *(_BYTE *)(a6 + 87) )
  {
    if ( a9 )
    {
      result = uu_cp::copy_link(v29, a2, v28, a4, a5, a11);
      if ( *(_QWORD *)v29 != 0x800000000000000CLL )
        goto LABEL_24;
    }
    else
    {
      uu_cp::platform::linux::copy_on_write(
        (__int64)v29,
        a2,
        v28,
        a4,
        a5,
        *(_DWORD *)(a6 + 100),
        *(_BYTE *)(a6 + 99),
        a7,
        a8,
        a10,
        a12);
      result = *(_QWORD *)v29;
      v24 = *(_WORD *)&v29[8];
      v25 = v29[10];
      if ( *(_QWORD *)v29 != 0x800000000000000CLL )
      {
        v20 = *(_OWORD *)&v29[11];
        v21 = *(_OWORD *)&v29[27];
        *(_OWORD *)(a1 + 40) = *(_OWORD *)&v29[40];
        *(_OWORD *)(a1 + 27) = v21;
        *(_OWORD *)(a1 + 11) = v20;
        *(_BYTE *)(a1 + 10) = v25;
        *(_WORD *)(a1 + 8) = v24;
        *(_QWORD *)a1 = result;
        return result;
      }
      v26 = *(_WORD *)&v29[8];
      result = v29[10];
      v27 = v29[10];
      if ( !*(_BYTE *)(a6 + 86) )
      {
        if ( *(_BYTE *)(a6 + 95) )
          result = uu_cp::show_debug((unsigned __int8 *)&v26);
      }
    }
LABEL_21:
    *(_QWORD *)a1 = v15;
    return result;
  }
  result = uu_cp::copy_fifo(v29, a4, a5, *(unsigned int *)(a6 + 84), *(unsigned __int8 *)(a6 + 95));
  if ( *(_QWORD *)v29 == 0x800000000000000CLL )
    goto LABEL_21;
LABEL_24:
  result = *(_QWORD *)&v29[48];
  *(_QWORD *)(a1 + 48) = *(_QWORD *)&v29[48];
  v22 = *(_OWORD *)v29;
  v23 = *(_OWORD *)&v29[16];
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&v29[32];
  *(_OWORD *)(a1 + 16) = v23;
  *(_OWORD *)a1 = v22;
  return result;
}