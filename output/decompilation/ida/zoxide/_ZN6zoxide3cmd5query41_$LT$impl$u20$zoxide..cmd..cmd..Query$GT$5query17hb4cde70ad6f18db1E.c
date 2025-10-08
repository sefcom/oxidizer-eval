__int64 __fastcall zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-108h] BYREF
  __int128 v9; // [rsp+10h] [rbp-F8h]
  __int128 v10; // [rsp+20h] [rbp-E8h]
  __int128 v11; // [rsp+30h] [rbp-D8h]
  __int128 v12; // [rsp+40h] [rbp-C8h]
  __int128 v13; // [rsp+50h] [rbp-B8h]
  __int128 v14; // [rsp+60h] [rbp-A8h]
  __int64 v15; // [rsp+70h] [rbp-98h]
  __int64 v16; // [rsp+78h] [rbp-90h] BYREF
  __int64 v17; // [rsp+80h] [rbp-88h]
  __int128 v18; // [rsp+88h] [rbp-80h]
  __int128 v19; // [rsp+98h] [rbp-70h]
  __int128 v20; // [rsp+A8h] [rbp-60h]
  __int128 v21; // [rsp+B8h] [rbp-50h]
  __int128 v22; // [rsp+C8h] [rbp-40h]
  __int128 v23; // [rsp+D8h] [rbp-30h]
  __int64 v24; // [rsp+E8h] [rbp-20h]

  v2 = zoxide::util::current_time();
  v4 = v3;
  if ( (v2 & 1) == 0 )
  {
    zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::get_stream(&v16, a1, a2, v3);
    v5 = v17;
    if ( !__OFSUB__(-v16, 1LL) )
    {
      v15 = v24;
      v14 = v23;
      v13 = v22;
      v12 = v21;
      v11 = v20;
      v10 = v19;
      v9 = v18;
      v8[0] = v16;
      v8[1] = v17;
      if ( *(_BYTE *)(a1 + 73) )
      {
        v6 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query_interactive)(
               a1,
               v8,
               v4);
      }
      else if ( *(_BYTE *)(a1 + 74) )
      {
        v6 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query_list)(
               a1,
               v8,
               v4);
      }
      else
      {
        v6 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query_first)(
               a1,
               v8,
               v4);
      }
      v5 = v6;
      ((void (__fastcall *)(_QWORD *))core::ptr::drop_in_place<zoxide::db::stream::Stream>)(v8);
    }
    return v5;
  }
  return v4;
}