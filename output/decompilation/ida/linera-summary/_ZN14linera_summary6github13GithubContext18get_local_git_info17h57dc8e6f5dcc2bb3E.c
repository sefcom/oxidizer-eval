unsigned __int64 __fastcall linera_summary::github::GithubContext::get_local_git_info(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+8h] [rbp-B0h] BYREF
  __int128 v10; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+20h] [rbp-98h]
  __int128 v12; // [rsp+28h] [rbp-90h]
  __int64 v13; // [rsp+38h] [rbp-80h]
  __int128 v14; // [rsp+40h] [rbp-78h]
  __int64 v15; // [rsp+50h] [rbp-68h]
  __int128 v16; // [rsp+60h] [rbp-58h] BYREF
  __int64 v17; // [rsp+70h] [rbp-48h]
  __int128 v18; // [rsp+78h] [rbp-40h] BYREF
  __int64 v19; // [rsp+88h] [rbp-30h]
  __int128 v20; // [rsp+90h] [rbp-28h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-18h]

  git2::repo::Repository::open_from_env(&v10);
  if ( (anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v10) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 8) = v1;
    result = 0x8000000000000000LL;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return result;
  }
  v9 = v1;
  git2::repo::Repository::head(&v10, &v9);
  if ( (_QWORD)v10 )
  {
    *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v10);
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    v8 = *((_QWORD *)&v10 + 1);
    git2::reference::Reference::peel_to_commit(&v10, &v8);
    if ( (_QWORD)v10 )
    {
      *(_QWORD *)(a1 + 8) = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v10);
      *(_QWORD *)a1 = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)&v16 = *((_QWORD *)&v10 + 1);
      git2::commit::Commit::id(&v20, &v16);
      <T as alloc::string::SpecToString>::spec_to_string(&v18, &v20);
      core::ptr::drop_in_place<git2::commit::Commit>(&v16);
      if ( (unsigned __int8)git2::reference::Reference::is_branch(&v8) )
      {
        v3 = git2::reference::Reference::shorthand(&v8);
        if ( v3 )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, v3, v4);
          v17 = v11;
          v16 = v10;
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v20, "mainincbkrai\t", 4LL);
          v15 = v21;
          v5 = v20;
          v14 = v20;
          v6 = v18;
          v10 = v18;
          v11 = v19;
          v12 = v16;
          v13 = v17;
          *(_QWORD *)(a1 + 64) = v21;
          *(_OWORD *)(a1 + 48) = v5;
          *(_QWORD *)(a1 + 32) = *((_QWORD *)&v12 + 1);
          *(_QWORD *)(a1 + 40) = v13;
          *(_QWORD *)(a1 + 16) = v11;
          *(_QWORD *)(a1 + 24) = v12;
          *(_OWORD *)a1 = v6;
          core::ptr::drop_in_place<git2::reference::Reference>(&v8);
          return core::ptr::drop_in_place<git2::repo::Repository>(&v9);
        }
        *(_QWORD *)&v10 = &off_8F3450;
        *((_QWORD *)&v10 + 1) = 1LL;
        v11 = 8LL;
        v12 = 0LL;
        v7 = anyhow::__private::format_err(&v10);
      }
      else
      {
        *(_QWORD *)&v10 = &off_8F3460;
        *((_QWORD *)&v10 + 1) = 1LL;
        v11 = 8LL;
        v12 = 0LL;
        v7 = anyhow::__private::format_err(&v10);
      }
      *(_QWORD *)(a1 + 8) = v7;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::string::String>(&v18);
    }
    core::ptr::drop_in_place<git2::reference::Reference>(&v8);
  }
  return core::ptr::drop_in_place<git2::repo::Repository>(&v9);
}