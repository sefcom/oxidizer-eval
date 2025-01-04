        __int64 a5)
{
  char v7; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  char result; // al
  __int64 v11; // rsi
  char v12; // bp
  char v13; // r14
  char v14; // r12
  bool v15; // zf
  char v16; // al
  __int64 v17; // [rsp+0h] [rbp-58h]
  unsigned __int64 v18; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  __int64 v20; // [rsp+18h] [rbp-40h]
  unsigned __int64 v21; // [rsp+20h] [rbp-38h]

  uu_cp::platform::linux::check_for_data((__int64)&v18);
  v7 = v19;
  if ( (_BYTE)v19 == 2 )
  {
    v8 = v18;
LABEL_5:
    *(_QWORD *)(a1 + 8) = v8;
    result = 1;
    goto LABEL_6;
  }
  v17 = a4;
  v21 = v18;
  v9 = v20;
  uu_cp::platform::linux::check_sparse_detection((__int64)&v18);
  if ( (_BYTE)v18 )
  {
    v8 = v19;
    goto LABEL_5;
  }
  v11 = a5;
  if ( v7 || v21 < 0x200 )
  {
    if ( BYTE1(v18) )
    {
      v15 = v7 == 0;
      v13 = 3;
      if ( !v15 )
        v13 = (2 * (v9 != 0)) | 1;
      v12 = 3;
      v14 = 3;
    }
    else
    {
      v14 = 3;
      v13 = 2;
      v12 = 1;
    }
  }
  else
  {
    v12 = (2 * BYTE1(v18)) | 1;
    v13 = (BYTE1(v18) == 0) ^ 3;
    v14 = 0;
  }
  v15 = (unsigned __int8)uu_cp::platform::linux::check_dest_is_fifo(v17, v11) == 0;
  v16 = 1;
  if ( v15 )
    v16 = v13;
  *(_BYTE *)(a1 + 1) = v14;
  *(_BYTE *)(a1 + 2) = 1;
  *(_BYTE *)(a1 + 3) = v12;
  *(_BYTE *)(a1 + 4) = v16;
  result = 0;
LABEL_6:
  *(_BYTE *)a1 = result;
  return result;
}
