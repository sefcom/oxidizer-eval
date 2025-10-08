__int64 __fastcall linera_summary::github::GithubContext::from_env(__int64 a1, unsigned __int8 a2, char a3, __int64 a4)
{
  __int128 v8; // rdi
  char v9; // r13
  __int64 result; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm0
  char *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int128 v17; // [rsp+8h] [rbp-1B0h] BYREF
  __m256i v18; // [rsp+18h] [rbp-1A0h] BYREF
  __int128 v19; // [rsp+40h] [rbp-178h] BYREF
  __int64 v20; // [rsp+50h] [rbp-168h]
  __int128 v21; // [rsp+60h] [rbp-158h] BYREF
  __int64 v22; // [rsp+70h] [rbp-148h]
  __int128 v23; // [rsp+78h] [rbp-140h] BYREF
  __m256i v24; // [rsp+88h] [rbp-130h]
  __int128 v25; // [rsp+A8h] [rbp-110h]
  __int64 v26; // [rsp+B8h] [rbp-100h]
  char v27[8]; // [rsp+C0h] [rbp-F8h] BYREF
  __int128 v28; // [rsp+C8h] [rbp-F0h]
  __int64 v29; // [rsp+D8h] [rbp-E0h]
  __int128 v30; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-C8h]
  __int128 v32; // [rsp+100h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+110h] [rbp-A8h]
  char v34[8]; // [rsp+118h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+120h] [rbp-98h]
  __int64 v36; // [rsp+130h] [rbp-88h]
  char v37[8]; // [rsp+138h] [rbp-80h] BYREF
  __int128 v38; // [rsp+140h] [rbp-78h]
  __int64 v39; // [rsp+150h] [rbp-68h]
  char v40[8]; // [rsp+158h] [rbp-60h] BYREF
  __int128 v41; // [rsp+160h] [rbp-58h]
  __int64 v42; // [rsp+170h] [rbp-48h]
  char v43[8]; // [rsp+178h] [rbp-40h] BYREF
  __int64 v44; // [rsp+180h] [rbp-38h]

  std::env::var(v37, aGithubPrCommit, 21LL);
  std::env::var(v34, aGithubPrBranch, 16LL);
  std::env::var(v27, aGithubBaseBran, 18LL);
  std::env::var(v40, aGithubPrNumber, 16LL);
  if ( a2 )
  {
    linera_summary::github::GithubContext::get_local_git_info((__int64)&v23);
    if ( (_QWORD)v23 == 0x8000000000000000LL )
    {
      *(_OWORD *)a1 = __PAIR128__(*((unsigned __int64 *)&v23 + 1), 0x8000000000000000LL);
LABEL_14:
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v40);
      goto LABEL_15;
    }
    v18 = v24;
    v20 = v26;
    v19 = v25;
    v17 = v23;
    if ( (a3 & 1) == 0 )
    {
      *(_QWORD *)&v23 = &off_8F3470;
      *((_QWORD *)&v23 + 1) = 1LL;
      v24.m256i_i64[0] = 8LL;
      *(_OWORD *)&v24.m256i_u64[1] = 0LL;
      *(_QWORD *)(a1 + 8) = anyhow::__private::format_err(&v23);
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::string::String>(&v19);
      core::ptr::drop_in_place<alloc::string::String>(&v18.m256i_u64[1]);
      core::ptr::drop_in_place<alloc::string::String>(&v17);
      goto LABEL_14;
    }
    v22 = v18.m256i_i64[0];
    v21 = v17;
    v30 = *(_OWORD *)&v18.m256i_u64[1];
    v31 = v18.m256i_i64[3];
    v32 = v19;
    v33 = v20;
    v9 = 1;
LABEL_10:
    linera_summary::github::GithubRepository::from_env(&v23, a2);
    result = *((_QWORD *)&v23 + 1);
    v11 = v23;
    if ( (_QWORD)v23 == 0x8000000000000000LL )
    {
      *(_OWORD *)a1 = __PAIR128__(*((unsigned __int64 *)&v23 + 1), 0x8000000000000000LL);
      core::ptr::drop_in_place<alloc::string::String>(&v32);
      core::ptr::drop_in_place<alloc::string::String>(&v30);
      result = core::ptr::drop_in_place<alloc::string::String>(&v21);
      if ( !v9 )
        return result;
    }
    else
    {
      v12 = *(_OWORD *)v24.m256i_i8;
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v24.m256i_u64[2];
      *(_OWORD *)(a1 + 16) = v12;
      *(_QWORD *)(a1 + 64) = v22;
      *(_OWORD *)(a1 + 48) = v21;
      *(_QWORD *)(a1 + 88) = v31;
      *(_OWORD *)(a1 + 72) = v30;
      *(_OWORD *)(a1 + 96) = v32;
      *(_QWORD *)(a1 + 112) = v33;
      *(_QWORD *)a1 = v11;
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 120) = a4;
      if ( !v9 )
        return result;
    }
    goto LABEL_14;
  }
  v8 = v41;
  if ( (v40[0] & 1) == 0 )
  {
    if ( (_QWORD)v41 == 0x8000000000000000LL )
      goto LABEL_7;
    v17 = v41;
    v18.m256i_i64[0] = v42;
    v14 = *((_QWORD *)&v38 + 1);
    if ( (v37[0] & 1) != 0 )
    {
      v14 = linera_summary::github::GithubContext::from_env::{{closure}}(v38, *((_QWORD *)&v38 + 1));
LABEL_21:
      *(_QWORD *)(a1 + 8) = v14;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::string::String>(&v17);
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v27);
      v13 = v34;
      return core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v13);
    }
    if ( (_QWORD)v38 == 0x8000000000000000LL )
      goto LABEL_21;
    *(_OWORD *)&v18.m256i_u64[1] = v38;
    v18.m256i_i64[3] = v39;
    v15 = *((_QWORD *)&v35 + 1);
    if ( (v34[0] & 1) != 0 )
    {
      v15 = linera_summary::github::GithubContext::from_env::{{closure}}(v35, *((_QWORD *)&v35 + 1));
LABEL_25:
      *(_QWORD *)(a1 + 8) = v15;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::string::String>(&v18.m256i_u64[1]);
      core::ptr::drop_in_place<alloc::string::String>(&v17);
      v13 = v27;
      return core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v13);
    }
    if ( (_QWORD)v35 == 0x8000000000000000LL )
      goto LABEL_25;
    v19 = v35;
    v20 = v36;
    v16 = *((_QWORD *)&v28 + 1);
    if ( (v27[0] & 1) != 0 )
    {
      v16 = linera_summary::github::GithubContext::from_env::{{closure}}(v28, *((_QWORD *)&v28 + 1));
    }
    else if ( (_QWORD)v28 != 0x8000000000000000LL )
    {
      v23 = v28;
      v24.m256i_i64[0] = v29;
      core::num::<impl u64>::from_ascii_radix(v43);
      if ( !v43[0] )
      {
        a4 = v44;
        v21 = *(_OWORD *)&v18.m256i_u64[1];
        v22 = v18.m256i_i64[3];
        v30 = v19;
        v31 = v20;
        v32 = v23;
        v33 = v24.m256i_i64[0];
        core::ptr::drop_in_place<alloc::string::String>(&v17);
        v9 = 0;
        goto LABEL_10;
      }
      *(_QWORD *)(a1 + 8) = linera_summary::github::GithubContext::from_env::{{closure}}(&v17);
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::string::String>(&v23);
LABEL_30:
      core::ptr::drop_in_place<alloc::string::String>(&v19);
      core::ptr::drop_in_place<alloc::string::String>(&v18.m256i_u64[1]);
      return core::ptr::drop_in_place<alloc::string::String>(&v17);
    }
    *(_QWORD *)(a1 + 8) = v16;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    goto LABEL_30;
  }
  *((_QWORD *)&v8 + 1) = linera_summary::github::GithubContext::from_env::{{closure}}(v41, *((_QWORD *)&v41 + 1));
LABEL_7:
  *(_QWORD *)(a1 + 8) = *((_QWORD *)&v8 + 1);
  *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_15:
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v27);
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v34);
  v13 = v37;
  return core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v13);
}