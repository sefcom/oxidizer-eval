char __fastcall uu_cp::platform::linux::handle_reflink_auto_sparse_never(__int64 a1)
{
  char v1; // bp
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r12
  char result; // al
  char v5; // al
  char v6; // dl
  unsigned __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+10h] [rbp-38h]

  uu_cp::platform::linux::check_for_data((__int64)&v7);
  v1 = v8;
  if ( (_BYTE)v8 == 2 )
  {
    v2 = v7;
LABEL_5:
    *(_QWORD *)(a1 + 8) = v2;
    result = 1;
    goto LABEL_9;
  }
  v3 = v7;
  uu_cp::platform::linux::check_sparse_detection((__int64)&v7);
  if ( (_BYTE)v7 == 1 )
  {
    v2 = v8;
    goto LABEL_5;
  }
  v5 = 2 * BYTE1(v7) + 1;
  v6 = 3;
  if ( v3 >= 0x200 )
    v6 = 3 * ((v1 & 1) != 0);
  *(_BYTE *)(a1 + 1) = v6;
  *(_BYTE *)(a1 + 2) = 1;
  *(_BYTE *)(a1 + 3) = v5;
  result = 0;
LABEL_9:
  *(_BYTE *)a1 = result;
  return result;
}