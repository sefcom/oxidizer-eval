        __int64 a5)
{
  char v7; // bp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  char result; // al
  bool v12; // zf
  char v13; // bp
  char v14; // cl
  char v15; // r14
  char v16; // r15
  char v17; // al
  unsigned __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]
  __int64 v21; // [rsp+18h] [rbp-40h]
  __int64 v22; // [rsp+20h] [rbp-38h]

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
  v21 = a4;
  v22 = a5;
  v9 = v18;
  v10 = v20;
  uu_cp::platform::linux::check_sparse_detection((__int64)&v18);
  if ( (_BYTE)v18 )
  {
    v8 = v19;
    goto LABEL_5;
  }
  v12 = v7 == 0;
  v13 = 2 - (v10 == 0);
  if ( v12 )
    v13 = 2;
  v14 = 3 * (v9 < 0x200);
  v15 = 3;
  if ( v12 )
    v15 = v14;
  v16 = 4 - v12;
  if ( !BYTE1(v18) )
    v16 = 2;
  v12 = (unsigned __int8)uu_cp::platform::linux::check_dest_is_fifo() == 0;
  v17 = 1;
  if ( v12 )
    v17 = v13;
  *(_BYTE *)(a1 + 1) = v15;
  *(_BYTE *)(a1 + 2) = 4;
  *(_BYTE *)(a1 + 3) = v16;
  *(_BYTE *)(a1 + 4) = v17;
  result = 0;
LABEL_6:
  *(_BYTE *)a1 = result;
  return result;
}
