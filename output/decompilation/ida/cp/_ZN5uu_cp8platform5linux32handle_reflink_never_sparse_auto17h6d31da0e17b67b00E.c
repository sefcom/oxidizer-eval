char __fastcall uu_cp::platform::linux::handle_reflink_never_sparse_auto(__int64 a1)
{
  char v1; // r14
  unsigned __int64 v2; // rax
  __int64 v3; // r15
  char result; // al
  char v5; // bp
  char v6; // r14
  char v7; // r12
  bool v8; // zf
  char v9; // al
  unsigned __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+10h] [rbp-48h]
  __int64 v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+20h] [rbp-38h]

  uu_cp::platform::linux::check_for_data((__int64)&v10);
  v1 = v11;
  if ( (_BYTE)v11 == 2 )
  {
    v2 = v10;
LABEL_5:
    *(_QWORD *)(a1 + 8) = v2;
    result = 1;
    goto LABEL_6;
  }
  v13 = v10;
  v3 = v12;
  uu_cp::platform::linux::check_sparse_detection((__int64)&v10);
  if ( (_BYTE)v10 )
  {
    v2 = v11;
    goto LABEL_5;
  }
  if ( v1 || v13 < 0x200 )
  {
    if ( BYTE1(v10) )
    {
      v8 = v1 == 0;
      v6 = 3;
      if ( !v8 )
        v6 = (2 * (v3 != 0)) | 1;
      v5 = 3;
      v7 = 3;
    }
    else
    {
      v7 = 3;
      v6 = 2;
      v5 = 1;
    }
  }
  else
  {
    v5 = (2 * BYTE1(v10)) | 1;
    v6 = (BYTE1(v10) == 0) ^ 3;
    v7 = 0;
  }
  v8 = (unsigned __int8)uu_cp::platform::linux::check_dest_is_fifo() == 0;
  v9 = 1;
  if ( v8 )
    v9 = v6;
  *(_BYTE *)(a1 + 1) = v7;
  *(_BYTE *)(a1 + 2) = 1;
  *(_BYTE *)(a1 + 3) = v5;
  *(_BYTE *)(a1 + 4) = v9;
  result = 0;
LABEL_6:
  *(_BYTE *)a1 = result;
  return result;
}
