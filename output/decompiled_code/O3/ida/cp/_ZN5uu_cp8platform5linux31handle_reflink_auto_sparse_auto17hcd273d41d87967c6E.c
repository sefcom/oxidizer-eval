        __int64 a5)
{
  char v8; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  char result; // al
  __int64 v12; // rsi
  char v13; // r12
  char v14; // r13
  char v15; // bp
  __int64 v16; // rdi
  bool v17; // zf
  char v18; // al
  __int64 v19; // [rsp+0h] [rbp-58h]
  __int64 v20; // [rsp+8h] [rbp-50h] BYREF
  __int64 v21; // [rsp+10h] [rbp-48h]
  __int64 v22; // [rsp+18h] [rbp-40h]
  __int64 v23; // [rsp+20h] [rbp-38h]

  uu_cp::platform::linux::check_for_data((__int64)&v20);
  v8 = v21;
  if ( (_BYTE)v21 == 2 )
  {
    v9 = v20;
LABEL_5:
    *(_QWORD *)(a1 + 8) = v9;
    result = 1;
    goto LABEL_6;
  }
  v19 = a4;
  v23 = v20;
  v10 = v22;
  uu_cp::platform::linux::check_sparse_detection((__int64)&v20);
  if ( (_BYTE)v20 )
  {
    v9 = v21;
    goto LABEL_5;
  }
  v12 = a5;
  if ( v8 )
  {
    if ( v23 )
      v13 = 2;
    else
      v13 = 4;
    v16 = v19;
    if ( BYTE1(v20) )
    {
      v14 = 3;
      v15 = 3;
      if ( !v10 )
      {
        v13 = 4;
        v14 = 1;
      }
    }
    else
    {
      v15 = 1;
      v14 = 2;
    }
  }
  else
  {
    v13 = 2 * ((unsigned __int64)(v23 - 1) < 0x1FF);
    v14 = (BYTE1(v20) == 0) ^ 3;
    v15 = (2 * BYTE1(v20)) | 1;
    v16 = v19;
  }
  v17 = (unsigned __int8)uu_cp::platform::linux::check_dest_is_fifo(v16, v12) == 0;
  v18 = 1;
  if ( v17 )
    v18 = v14;
  *(_BYTE *)(a1 + 1) = v13;
  *(_BYTE *)(a1 + 2) = 4;
  *(_BYTE *)(a1 + 3) = v15;
  *(_BYTE *)(a1 + 4) = v18;
  result = 0;
LABEL_6:
  *(_BYTE *)a1 = result;
  return result;
}
