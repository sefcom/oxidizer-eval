char __fastcall uu_cp::platform::linux::handle_reflink_auto_sparse_always(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  char v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  char result; // al
  bool v11; // cf
  char v12; // bp
  char v13; // r12
  char v14; // r14
  char v15; // al
  bool v16; // zf
  char v17; // al
  __int64 v18; // [rsp+0h] [rbp-58h]
  unsigned __int64 v19; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+10h] [rbp-48h]
  __int64 v21; // [rsp+18h] [rbp-40h]
  __int64 v22; // [rsp+20h] [rbp-38h]

  uu_cp::platform::linux::check_for_data((__int64)&v19);
  v7 = v20;
  if ( (_BYTE)v20 == 2 )
  {
    v8 = v19;
LABEL_5:
    *(_QWORD *)(a1 + 8) = v8;
    result = 1;
    goto LABEL_16;
  }
  v22 = a5;
  v9 = v19;
  v18 = v21;
  uu_cp::platform::linux::check_sparse_detection((__int64)&v19);
  if ( (_BYTE)v19 == 1 )
  {
    v8 = v20;
    goto LABEL_5;
  }
  v11 = v9 < 0x200;
  v12 = 3;
  if ( !v11 )
    v12 = 3 * ((v7 & 1) != 0);
  if ( BYTE1(v19) )
  {
    if ( (v7 & 1) != 0 )
    {
      v13 = 2 - (v18 == 0);
      v14 = 4;
    }
    else
    {
      v14 = 3;
      v13 = 2;
    }
  }
  else
  {
    v15 = v7 & (v18 == 0);
    v14 = 2;
    v13 = 2 - v15;
  }
  v16 = (unsigned __int8)uu_cp::platform::linux::check_dest_is_fifo(a4) == 0;
  v17 = 1;
  if ( v16 )
    v17 = v13;
  *(_BYTE *)(a1 + 1) = v12;
  *(_BYTE *)(a1 + 2) = 4;
  *(_BYTE *)(a1 + 3) = v14;
  *(_BYTE *)(a1 + 4) = v17;
  result = 0;
LABEL_16:
  *(_BYTE *)a1 = result;
  return result;
}