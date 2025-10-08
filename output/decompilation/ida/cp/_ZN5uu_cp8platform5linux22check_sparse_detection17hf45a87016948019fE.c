__int64 __fastcall uu_cp::platform::linux::check_sparse_detection(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ebp
  unsigned int v3; // [rsp+4h] [rbp-C4h] BYREF
  int v4; // [rsp+8h] [rbp-C0h] BYREF
  unsigned int v5; // [rsp+Ch] [rbp-BCh]
  __int64 v6; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v7; // [rsp+58h] [rbp-70h]
  unsigned __int64 v8; // [rsp+68h] [rbp-60h]

  std::fs::File::open(&v4);
  if ( v4 == 1 )
  {
    result = v6;
    *(_QWORD *)(a1 + 8) = v6;
    *(_BYTE *)a1 = 1;
  }
  else
  {
    v2 = v5;
    v3 = v5;
    std::fs::File::metadata(&v4, &v3);
    if ( v4 == 2 )
    {
      *(_QWORD *)(a1 + 8) = v6;
      *(_BYTE *)a1 = 1;
    }
    else if ( v8 >= v7 >> 9 )
    {
      *(_WORD *)a1 = 0;
    }
    else
    {
      *(_BYTE *)(a1 + 1) = 1;
      *(_BYTE *)a1 = 0;
    }
    return core::ptr::drop_in_place<std::fs::File>(v2);
  }
  return result;
}