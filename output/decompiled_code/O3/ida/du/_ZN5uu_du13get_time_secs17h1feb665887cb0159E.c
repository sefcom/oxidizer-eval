__int64 __fastcall uu_du::get_time_secs(__int64 a1, char a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // rcx
  _QWORD v7[2]; // [rsp+0h] [rbp-20h] BYREF
  __int128 v8; // [rsp+10h] [rbp-10h]

  if ( !a2 )
  {
    result = a3[14];
    goto LABEL_5;
  }
  if ( a2 == 1 )
  {
    result = a3[15];
LABEL_5:
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)a1 = 5LL;
    return result;
  }
  v4 = a3[7];
  v5 = a3[6] == 0LL;
  v7[0] = 3LL;
  if ( v5 )
  {
    result = v7[0];
    v6 = v7[1];
    *(_OWORD *)(a1 + 16) = v8;
    *(_QWORD *)a1 = result;
    *(_QWORD *)(a1 + 8) = v6;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = 5LL;
    return core::ptr::drop_in_place<uu_du::DuError>(v7);
  }
  return result;
}
