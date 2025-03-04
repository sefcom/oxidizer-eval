char __fastcall uu_cp::platform::linux::handle_reflink_never_sparse_always(__int64 a1)
{
  char v1; // r15
  unsigned __int64 v2; // rax
  __int64 v3; // r14
  char result; // al
  bool v5; // r12
  char v6; // bp
  char v7; // r13
  char v8; // al
  unsigned __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v10; // [rsp+10h] [rbp-48h]
  __int64 v11; // [rsp+18h] [rbp-40h]
  unsigned __int64 v12; // [rsp+20h] [rbp-38h]

  uu_cp::platform::linux::check_for_data((__int64)&v9);
  v1 = v10;
  if ( (_BYTE)v10 == 2 )
  {
    v2 = v9;
LABEL_5:
    *(_QWORD *)(a1 + 8) = v2;
    result = 1;
    goto LABEL_6;
  }
  v12 = v9;
  v3 = v11;
  uu_cp::platform::linux::check_sparse_detection((__int64)&v9);
  if ( (_BYTE)v9 )
  {
    v2 = v10;
    goto LABEL_5;
  }
  if ( v1 )
  {
    v5 = v3 == 0;
    v6 = 2 * BYTE1(v9) + 2;
    v7 = 3;
  }
  else
  {
    v5 = 0;
    v7 = 3 * (v12 < 0x200);
    if ( BYTE1(v9) )
    {
      if ( v3 )
        v7 = 0;
      v6 = 3;
    }
    else
    {
      v6 = 2;
    }
  }
  v8 = uu_cp::platform::linux::check_dest_is_fifo();
  *(_BYTE *)(a1 + 1) = v7;
  *(_BYTE *)(a1 + 2) = 1;
  *(_BYTE *)(a1 + 3) = v6;
  *(_BYTE *)(a1 + 4) = v5 | v8;
  result = 0;
LABEL_6:
  *(_BYTE *)a1 = result;
  return result;
}
