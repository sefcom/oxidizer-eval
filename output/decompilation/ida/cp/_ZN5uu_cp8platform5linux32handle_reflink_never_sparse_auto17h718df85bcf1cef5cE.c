char __fastcall uu_cp::platform::linux::handle_reflink_never_sparse_auto(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int8 v5; // bp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r14
  char result; // al
  char v9; // r12
  char v10; // bp
  char v11; // r13
  bool v12; // zf
  char v13; // al
  unsigned __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v15; // [rsp+10h] [rbp-48h]
  __int64 v16; // [rsp+18h] [rbp-40h]
  __int64 v17; // [rsp+20h] [rbp-38h]

  uu_cp::platform::linux::check_for_data((__int64)&v14);
  v5 = v15;
  if ( (_BYTE)v15 == 2 )
  {
    v6 = v14;
LABEL_5:
    *(_QWORD *)(a1 + 8) = v6;
    result = 1;
    goto LABEL_14;
  }
  v7 = v14;
  v17 = v16;
  uu_cp::platform::linux::check_sparse_detection((__int64)&v14);
  if ( (_BYTE)v14 == 1 )
  {
    v6 = v15;
    goto LABEL_5;
  }
  if ( ((v5 ^ 1) & (v7 >= 0x200)) != 0 )
  {
    v10 = 2 * BYTE1(v14) + 1;
    v9 = BYTE1(v14) | 2;
    v11 = 0;
  }
  else if ( BYTE1(v14) )
  {
    v9 = 2 * ((v5 & 1) == 0 || v17 != 0) + 1;
    v10 = 3;
    v11 = 3;
  }
  else
  {
    v11 = 3;
    v9 = 2;
    v10 = 1;
  }
  v12 = (unsigned __int8)uu_cp::platform::linux::check_dest_is_fifo(a4) == 0;
  v13 = 1;
  if ( v12 )
    v13 = v9;
  *(_BYTE *)(a1 + 1) = v11;
  *(_BYTE *)(a1 + 2) = 1;
  *(_BYTE *)(a1 + 3) = v10;
  *(_BYTE *)(a1 + 4) = v13;
  result = 0;
LABEL_14:
  *(_BYTE *)a1 = result;
  return result;
}