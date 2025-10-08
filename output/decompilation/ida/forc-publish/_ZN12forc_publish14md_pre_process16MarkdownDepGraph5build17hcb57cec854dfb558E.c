__int64 __fastcall forc_publish::md_pre_process::MarkdownDepGraph::build(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int128 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v10; // [rsp+10h] [rbp-98h]
  __int128 v11; // [rsp+20h] [rbp-88h]
  __int128 v12; // [rsp+30h] [rbp-78h] BYREF
  __int128 v13; // [rsp+40h] [rbp-68h]
  __int128 v14; // [rsp+50h] [rbp-58h]
  _OWORD v15[4]; // [rsp+60h] [rbp-48h] BYREF

  *(_QWORD *)&v4 = std::thread::local::LocalKey<T>::with();
  v9 = *(_OWORD *)&off_E53140;
  v10 = xmmword_E53150;
  v11 = v4;
  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(&v12);
  v15[2] = v14;
  v15[1] = v13;
  v15[0] = v12;
  forc_publish::md_pre_process::MarkdownDepGraph::build_recursive(&v12, a2, a3, &v9, v15);
  if ( (_DWORD)v12 == 6 )
  {
    v5 = v9;
    v6 = v10;
    a1[2] = v11;
    a1[1] = v6;
    *a1 = v5;
    return core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(v15);
  }
  else
  {
    v8 = v12;
    *(_OWORD *)((char *)a1 + 24) = v13;
    *(_OWORD *)((char *)a1 + 8) = v8;
    *(_QWORD *)a1 = 0LL;
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(v15);
    return core::ptr::drop_in_place<std::collections::hash::map::HashMap<std::path::PathBuf,std::collections::hash::set::HashSet<std::path::PathBuf>>>(&v9);
  }
}