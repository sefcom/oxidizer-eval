        __int64 a5)
{
  char v7; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  char result; // al
  __int64 v11; // rsi
  bool v12; // r12
  char v13; // bp
  char v14; // r13
  char v15; // al
  __int64 v16; // [rsp+0h] [rbp-58h]
  unsigned __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  __int64 v19; // [rsp+18h] [rbp-40h]
  unsigned __int64 v20; // [rsp+20h] [rbp-38h]

  uu_cp::platform::linux::check_for_data((__int64)&v17);
  v7 = v18;
  if ( (_BYTE)v18 == 2 )
  {
    v8 = v17;
LABEL_5:
    *(_QWORD *)(a1 + 8) = v8;
    result = 1;
    goto LABEL_6;
  }
  v16 = a4;
  v20 = v17;
  v9 = v19;
  uu_cp::platform::linux::check_sparse_detection((__int64)&v17);
  if ( (_BYTE)v17 )
  {
    v8 = v18;
    goto LABEL_5;
  }
  v11 = a5;
  if ( v7 )
  {
    v12 = v9 == 0;
    v13 = 2 * BYTE1(v17) + 2;
    v14 = 3;
  }
  else
  {
    v12 = 0;
    v14 = 3 * (v20 < 0x200);
    if ( BYTE1(v17) )
    {
      if ( v9 )
        v14 = 0;
      v13 = 3;
    }
    else
    {
      v13 = 2;
    }
  }
  v15 = uu_cp::platform::linux::check_dest_is_fifo(v16, v11);
  *(_BYTE *)(a1 + 1) = v14;
  *(_BYTE *)(a1 + 2) = 1;
  *(_BYTE *)(a1 + 3) = v13;
  *(_BYTE *)(a1 + 4) = v12 | v15;
  result = 0;
LABEL_6:
  *(_BYTE *)a1 = result;
  return result;
}
