char __fastcall uu_cp::platform::linux::handle_reflink_never_sparse_always(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // r15
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r14
  char result; // al
  bool v9; // r13
  char v10; // bp
  char v11; // r12
  char v12; // al
  __int64 v13; // [rsp+0h] [rbp-58h]
  __int64 v14; // [rsp+8h] [rbp-50h]
  unsigned __int64 v15; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]
  __int64 v17; // [rsp+20h] [rbp-38h]

  uu_cp::platform::linux::check_for_data((__int64)&v15);
  v5 = v16;
  if ( (_BYTE)v16 == 2 )
  {
    v6 = v15;
LABEL_5:
    *(_QWORD *)(a1 + 8) = v6;
    result = 1;
    goto LABEL_14;
  }
  v13 = a4;
  v7 = v15;
  v14 = v17;
  uu_cp::platform::linux::check_sparse_detection((__int64)&v15);
  if ( (_BYTE)v15 == 1 )
  {
    v6 = v16;
    goto LABEL_5;
  }
  if ( (v5 & 1) != 0 )
  {
    v9 = v14 == 0;
    v10 = 2 * BYTE1(v15) + 2;
    v11 = 3;
  }
  else
  {
    v11 = 3 * (v7 < 0x200);
    v9 = 0;
    if ( BYTE1(v15) )
    {
      if ( v14 )
        v11 = 0;
      v10 = 3;
    }
    else
    {
      v10 = 2;
    }
  }
  v12 = uu_cp::platform::linux::check_dest_is_fifo(v13);
  *(_BYTE *)(a1 + 1) = v11;
  *(_BYTE *)(a1 + 2) = 1;
  *(_BYTE *)(a1 + 3) = v10;
  *(_BYTE *)(a1 + 4) = (v9 | v12) & 1;
  result = 0;
LABEL_14:
  *(_BYTE *)a1 = result;
  return result;
}