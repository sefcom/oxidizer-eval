__int64 __fastcall zoxide::cmd::remove::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Remove>::run(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v11; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+10h] [rbp-C8h]
  __int128 v13; // [rsp+18h] [rbp-C0h]
  __int128 v14; // [rsp+28h] [rbp-B0h]
  __int128 v15; // [rsp+38h] [rbp-A0h]
  __int64 v16; // [rsp+48h] [rbp-90h]
  __int64 v17; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-80h] BYREF
  __int64 v19; // [rsp+68h] [rbp-70h] BYREF
  __int128 v20; // [rsp+70h] [rbp-68h]
  __int128 v21; // [rsp+80h] [rbp-58h]
  __int128 v22; // [rsp+90h] [rbp-48h]
  __int64 v23; // [rsp+A0h] [rbp-38h]

  zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open(&v11);
  v5 = v12;
  if ( (_DWORD)v11 == 1 )
    return v5;
  v23 = v16;
  v22 = v15;
  v21 = v14;
  v20 = v13;
  v19 = v12;
  if ( !a2 )
  {
LABEL_13:
    v5 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::save(&v19, a2, v3, v4);
    goto LABEL_14;
  }
  v6 = 24 * a2;
  while ( 1 )
  {
    v17 = a1;
    a2 = a1;
    if ( (unsigned __int8)zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::remove(&v19, a1) )
      goto LABEL_5;
    a2 = a1;
    zoxide::util::resolve_path(&v11, a1);
    v7 = v11;
    v5 = v12;
    if ( __OFSUB__(-v11, 1LL) )
      goto LABEL_14;
    zoxide::util::path_to_str(&v11, v12, v13);
    v8 = v11;
    v9 = v12;
    if ( !v11 )
      goto LABEL_12;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            v11,
                            v12,
                            *(_QWORD *)(a1 + 8),
                            *(_QWORD *)(a1 + 16))
      || !(unsigned __int8)zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::remove(&v19, v8, v9) )
    {
      break;
    }
    a2 = v5;
    core::mem::drop(v7, v5);
LABEL_5:
    a1 += 24LL;
    v6 -= 24LL;
    if ( !v6 )
      goto LABEL_13;
  }
  v18[0] = &v17;
  v18[1] = <&T as core::fmt::Display>::fmt;
  v11 = (__int64)&off_134970;
  v12 = 1LL;
  *(_QWORD *)&v14 = 0LL;
  *(_QWORD *)&v13 = v18;
  *((_QWORD *)&v13 + 1) = 1LL;
  v9 = anyhow::__private::format_err(&v11);
LABEL_12:
  a2 = v5;
  core::mem::drop(v7, v5);
  v5 = v9;
LABEL_14:
  core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v19, a2);
  return v5;
}