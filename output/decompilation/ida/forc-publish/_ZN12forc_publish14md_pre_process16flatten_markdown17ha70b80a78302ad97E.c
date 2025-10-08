__int64 __fastcall forc_publish::md_pre_process::flatten_markdown(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 file; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  _BYTE v10[24]; // [rsp+0h] [rbp-E8h] BYREF
  __int128 v11; // [rsp+18h] [rbp-D0h]
  __int64 v12; // [rsp+28h] [rbp-C0h]
  _BYTE v13[40]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+58h] [rbp-90h]
  __int128 v15; // [rsp+60h] [rbp-88h] BYREF
  __int64 v16; // [rsp+70h] [rbp-78h]
  __int128 v17; // [rsp+80h] [rbp-68h]
  __int128 v18; // [rsp+90h] [rbp-58h]
  __int64 v19; // [rsp+A0h] [rbp-48h] BYREF
  __int128 v20; // [rsp+A8h] [rbp-40h]
  __int128 v21; // [rsp+B8h] [rbp-30h]
  __int64 v22; // [rsp+C8h] [rbp-20h]

  forc_publish::md_pre_process::MarkdownDepGraph::build(v10, a2, a3);
  result = *(_QWORD *)v10;
  *(_OWORD *)v13 = *(_OWORD *)&v10[8];
  *(_OWORD *)&v13[16] = v11;
  if ( *(_QWORD *)v10 )
  {
    v20 = *(_OWORD *)v13;
    v21 = *(_OWORD *)&v13[16];
    v19 = *(_QWORD *)v10;
    v22 = v12;
    forc_publish::md_pre_process::MarkdownDepGraph::topological_sort((__int64)v10, (__int64)&v19);
    v4 = *(_QWORD *)v10;
    *(_OWORD *)v13 = *(_OWORD *)&v10[8];
    *(_QWORD *)&v13[16] = v11;
    if ( *(_QWORD *)v10 == 6LL )
    {
      v16 = *(_QWORD *)&v13[16];
      v15 = *(_OWORD *)v13;
      forc_publish::md_pre_process::MarkdownFlattener::flatten_files(
        (__int64)v10,
        *(__int64 *)&v13[8],
        *(__int64 *)&v13[16]);
      v17 = *(_OWORD *)&v10[8];
      v18 = v11;
      if ( *(_QWORD *)v10 )
      {
        *(_OWORD *)&v13[8] = v17;
        *(_OWORD *)&v13[24] = v18;
        *(_QWORD *)v13 = *(_QWORD *)v10;
        v14 = v12;
        file = forc_publish::md_pre_process::MarkdownFlattener::get_file((__int64)v13, a2);
        if ( file )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v10, file);
          v6 = *(_QWORD *)v10;
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v10[8];
          *(_QWORD *)(a1 + 8) = v6;
          v7 = 6LL;
        }
        else
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v10, aCouldNotFlatte);
          *(_QWORD *)(a1 + 24) = *(_QWORD *)&v10[16];
          *(_OWORD *)(a1 + 8) = *(_OWORD *)v10;
          v7 = 5LL;
        }
        *(_QWORD *)a1 = v7;
        core::ptr::drop_in_place<forc_publish::md_pre_process::MarkdownFlattener>(v13);
      }
      else
      {
        v9 = v17;
        *(_OWORD *)(a1 + 16) = v18;
        *(_OWORD *)a1 = v9;
      }
      core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v15);
    }
    else
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v13[16];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v13;
      *(_QWORD *)a1 = v4;
    }
    return core::ptr::drop_in_place<forc_publish::md_pre_process::MarkdownDepGraph>(&v19);
  }
  else
  {
    v8 = *(_OWORD *)v13;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v13[16];
    *(_OWORD *)a1 = v8;
  }
  return result;
}