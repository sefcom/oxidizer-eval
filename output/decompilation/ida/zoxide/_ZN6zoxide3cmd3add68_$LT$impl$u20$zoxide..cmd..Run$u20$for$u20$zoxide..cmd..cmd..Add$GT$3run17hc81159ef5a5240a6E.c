__int64 __fastcall zoxide::cmd::add::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Add>::run(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // r14
  double v5; // r15
  char v6; // al
  double v7; // rdx
  double v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // xmm0_8
  __int64 v13; // r12
  __int64 v14; // r14
  bool v15; // zf
  __int64 (__fastcall *v16)(); // rax
  char **v17; // r13
  __int64 v18; // rsi
  char **v19; // rbp
  __int64 v20; // r15
  __int64 v21; // rbx
  __int64 v23; // [rsp+0h] [rbp-118h]
  char **v24; // [rsp+8h] [rbp-110h] BYREF
  __int64 v25; // [rsp+10h] [rbp-108h]
  __int128 v26; // [rsp+18h] [rbp-100h]
  __int128 v27; // [rsp+28h] [rbp-F0h]
  __int128 v28; // [rsp+38h] [rbp-E0h]
  __int64 v29; // [rsp+48h] [rbp-D0h]
  double v30; // [rsp+50h] [rbp-C8h]
  __int64 v31; // [rsp+58h] [rbp-C0h]
  double v32; // [rsp+60h] [rbp-B8h]
  double v33; // [rsp+68h] [rbp-B0h]
  _QWORD v34[3]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+88h] [rbp-90h] BYREF
  __int128 v36; // [rsp+90h] [rbp-88h]
  __int128 v37; // [rsp+A0h] [rbp-78h]
  __int128 v38; // [rsp+B0h] [rbp-68h]
  __int64 v39; // [rsp+C0h] [rbp-58h]
  _QWORD v40[2]; // [rsp+C8h] [rbp-50h] BYREF
  _QWORD v41[8]; // [rsp+D8h] [rbp-40h] BYREF

  zoxide::config::exclude_dirs(&v24);
  v3 = v25;
  if ( !__OFSUB__(-(__int64)v24, 1LL) )
  {
    v4 = v26;
    v34[0] = v24;
    v34[1] = v25;
    v34[2] = v26;
    zoxide::config::maxage(&v24, a2, v2, -(__int64)v24);
    v5 = *(double *)&v25;
    if ( ((unsigned __int8)v24 & 1) == 0 )
    {
      v6 = zoxide::util::current_time();
      v8 = v7;
      if ( (v6 & 1) != 0 )
      {
        v5 = v7;
      }
      else
      {
        zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open(&v24);
        v10 = v25;
        if ( (_DWORD)v24 != 1 )
        {
          v33 = v8;
          v32 = v5;
          v39 = v29;
          v38 = v28;
          v37 = v27;
          v36 = v26;
          v35 = v25;
          v11 = *(_QWORD *)(a1 + 32);
          if ( v11 )
          {
            v31 = 56 * v4;
            if ( (*(_BYTE *)a1 & 1) != 0 )
              v12 = *(__int64 *)(a1 + 8);
            else
              *(double *)&v12 = 1.0;
            v30 = *(double *)&v12;
            v13 = *(_QWORD *)(a1 + 24);
            v31 += v3;
            v14 = 24 * v11;
            while ( 1 )
            {
              v15 = (unsigned __int8)zoxide::config::resolve_symlinks() == 0;
              v16 = zoxide::util::resolve_path;
              if ( !v15 )
                v16 = zoxide::util::canonicalize;
              ((void (__fastcall *)(char ***, __int64))v16)(&v24, v13);
              v17 = v24;
              v18 = v25;
              if ( v24 == (char **)0x8000000000000000LL )
              {
                v20 = v25;
                goto LABEL_26;
              }
              v23 = v25;
              zoxide::util::path_to_str(&v24, v25, v26);
              v19 = v24;
              v20 = v25;
              if ( !v24 )
                break;
              v40[0] = v24;
              v40[1] = v25;
              if ( !(unsigned __int8)core::str::pattern::Pattern::is_contained_in(v24, v25) )
              {
                v24 = (char **)v3;
                v25 = v31;
                if ( !(unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(
                                         &v24,
                                         v19,
                                         v20) )
                {
                  if ( !(unsigned __int8)std::path::Path::is_dir(v19, v20) )
                  {
                    v41[0] = v40;
                    v41[1] = <&T as core::fmt::Display>::fmt;
                    v24 = &off_1348D0;
                    v25 = 1LL;
                    *(_QWORD *)&v27 = 0LL;
                    *(_QWORD *)&v26 = v41;
                    *((_QWORD *)&v26 + 1) = 1LL;
                    *(double *)&v20 = COERCE_DOUBLE(anyhow::__private::format_err(&v24));
                    break;
                  }
                  zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add_update(
                    &v35,
                    v19,
                    v20,
                    *(_QWORD *)&v33,
                    v30);
                }
              }
              a2 = v23;
              core::mem::drop(v17, v23);
              v13 += 24LL;
              v14 -= 24LL;
              if ( !v14 )
                goto LABEL_20;
            }
            v18 = v23;
            core::mem::drop(v17, v23);
LABEL_26:
            core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v35, v18);
            v10 = v20;
          }
          else
          {
LABEL_20:
            if ( (_BYTE)v39 == 1 )
              zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::age(&v35, a2, v9, v10, v32);
            *(double *)&v21 = COERCE_DOUBLE(
                                zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::save(
                                  &v35,
                                  a2,
                                  v9,
                                  v10));
            core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v35, a2);
            v10 = v21;
          }
        }
        v5 = *(double *)&v10;
      }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<glob::Pattern>>(v34);
    return *(_QWORD *)&v5;
  }
  return v3;
}