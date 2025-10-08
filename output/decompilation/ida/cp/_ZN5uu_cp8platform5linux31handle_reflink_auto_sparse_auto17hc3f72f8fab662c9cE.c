char __fastcall uu_cp::platform::linux::handle_reflink_auto_sparse_auto(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbp
  char result; // al
  char v10; // r12
  char v11; // r13
  char v12; // bp
  __int64 v13; // rdi
  bool v14; // zf
  char v15; // al
  __int64 v16; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  __int64 v18; // [rsp+18h] [rbp-40h]
  __int64 v19; // [rsp+20h] [rbp-38h]

  uu_cp::platform::linux::check_for_data((__int64)&v17);
  v6 = v18;
  if ( (_BYTE)v18 == 2 )
  {
    v7 = v17;
LABEL_5:
    *(_QWORD *)(a1 + 8) = v7;
    result = 1;
    goto LABEL_15;
  }
  v8 = v17;
  v16 = v19;
  uu_cp::platform::linux::check_sparse_detection((__int64)&v17);
  if ( (_BYTE)v17 == 1 )
  {
    v7 = v18;
    goto LABEL_5;
  }
  if ( (v6 & 1) == 0 )
  {
    v11 = 2 * ((unsigned __int64)(v8 - 1) < 0x1FF);
    v12 = BYTE1(v17) + 2;
    v10 = 2 * BYTE1(v17) + 1;
    goto LABEL_11;
  }
  if ( !v8 )
  {
    v11 = 4;
    if ( !BYTE1(v17) )
    {
      v10 = 1;
      v12 = 2;
      goto LABEL_11;
    }
LABEL_17:
    v12 = 3;
    v10 = 3;
    v13 = a4;
    if ( !v16 )
    {
      v11 = 4;
      v12 = 1;
    }
    goto LABEL_12;
  }
  v10 = 1;
  v11 = 2;
  if ( BYTE1(v17) )
    goto LABEL_17;
  v12 = 2;
LABEL_11:
  v13 = a4;
LABEL_12:
  v14 = (unsigned __int8)uu_cp::platform::linux::check_dest_is_fifo(v13) == 0;
  v15 = 1;
  if ( v14 )
    v15 = v12;
  *(_BYTE *)(a1 + 1) = v11;
  *(_BYTE *)(a1 + 2) = 4;
  *(_BYTE *)(a1 + 3) = v10;
  *(_BYTE *)(a1 + 4) = v15;
  result = 0;
LABEL_15:
  *(_BYTE *)a1 = result;
  return result;
}