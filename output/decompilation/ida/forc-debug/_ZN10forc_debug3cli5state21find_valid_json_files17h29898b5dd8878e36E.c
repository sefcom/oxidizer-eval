__int64 __fastcall forc_debug::cli::state::find_valid_json_files(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v3; // kr00_16
  __int64 v4; // r13
  __int64 v5; // rax
  __int128 v6; // kr10_16
  char v7; // bp
  __int64 result; // rax
  _OWORD *v9; // rcx
  _BYTE v10[56]; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 v11; // [rsp+38h] [rbp-1A0h]
  char v12; // [rsp+40h] [rbp-198h]
  int v13; // [rsp+41h] [rbp-197h]
  __int16 v14; // [rsp+45h] [rbp-193h]
  char v15; // [rsp+47h] [rbp-191h]
  __int128 v16; // [rsp+48h] [rbp-190h] BYREF
  __int64 v17; // [rsp+58h] [rbp-180h]
  __int64 v18; // [rsp+60h] [rbp-178h] BYREF
  __int128 v19; // [rsp+68h] [rbp-170h]
  __int64 v20; // [rsp+78h] [rbp-160h] BYREF
  __int128 v21; // [rsp+80h] [rbp-158h]
  __int64 v22; // [rsp+90h] [rbp-148h]
  __int64 v23; // [rsp+98h] [rbp-140h]
  __int64 v24; // [rsp+A0h] [rbp-138h]
  _OWORD v25[2]; // [rsp+A8h] [rbp-130h] BYREF
  _BYTE v26[8]; // [rsp+C8h] [rbp-110h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-108h]
  __int64 v28; // [rsp+D8h] [rbp-100h]
  __int128 v29; // [rsp+E0h] [rbp-F8h]
  _QWORD v30[4]; // [rsp+F8h] [rbp-E0h] BYREF
  __int128 v31; // [rsp+118h] [rbp-C0h]
  __int64 v32; // [rsp+128h] [rbp-B0h]
  __int128 v33; // [rsp+130h] [rbp-A8h]
  __int64 v34; // [rsp+140h] [rbp-98h]
  __int64 v35; // [rsp+148h] [rbp-90h]
  __int128 v36; // [rsp+150h] [rbp-88h]
  __int64 v37; // [rsp+160h] [rbp-78h]
  __int128 v38; // [rsp+168h] [rbp-70h]
  __int128 v39; // [rsp+178h] [rbp-60h]
  __int64 v40; // [rsp+188h] [rbp-50h]
  char v41; // [rsp+190h] [rbp-48h]
  int v42; // [rsp+191h] [rbp-47h]
  __int16 v43; // [rsp+195h] [rbp-43h]
  char v44; // [rsp+197h] [rbp-41h]
  __int128 v45; // [rsp+198h] [rbp-40h]

  v24 = a3;
  v23 = a2;
  v22 = a1;
  *(_QWORD *)&v16 = 0LL;
  *((_QWORD *)&v16 + 1) = 8LL;
  v17 = 0LL;
  walkdir::WalkDir::new(v10);
  v12 = 1;
  v40 = v11;
  v41 = 1;
  v42 = v13;
  v43 = v14;
  v44 = v15;
  v39 = *(_OWORD *)&v10[40];
  v38 = *(_OWORD *)&v10[24];
  v36 = *(_OWORD *)v10;
  v37 = *(_QWORD *)&v10[16];
  v30[0] = 0LL;
  v30[2] = 0LL;
  v30[3] = 8LL;
  v31 = 0LL;
  v32 = 8LL;
  v33 = 0LL;
  v34 = 8LL;
  v35 = 0LL;
  v45 = 0LL;
  while ( 1 )
  {
    core::iter::traits::iterator::Iterator::try_fold(v10, v30);
    v3 = *(_OWORD *)v10;
    if ( *(_QWORD *)v10 == 0x8000000000000000LL )
      break;
    if ( (*(_WORD *)&v10[40] & 0xF000) == 0x8000 )
    {
      v4 = *(_QWORD *)&v10[16];
      alloc::string::String::from_utf8_lossy(v26, *(_QWORD *)&v10[8], *(_QWORD *)&v10[16]);
      v5 = <&str as core::str::pattern::Pattern>::strip_prefix_of(&unk_2EB18E, v27, v28);
      if ( v5 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v10, v5);
        v29 = *(_OWORD *)&v10[8];
        if ( *(_QWORD *)v10 != 0x8000000000000000LL )
        {
          v18 = *(_QWORD *)v10;
          v19 = v29;
          v6 = v29;
          if ( (unsigned __int8)core::slice::<impl [T]>::ends_with(v29, *((_QWORD *)&v29 + 1), aJson, 5LL)
            && (unsigned __int8)core::slice::<impl [T]>::starts_with(v6, *((_QWORD *)&v6 + 1), v23, v24) )
          {
            std::fs::read_to_string(&v20, *((_QWORD *)&v3 + 1), v4);
            if ( v20 == 0x8000000000000000LL )
            {
              core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v20);
            }
            else
            {
              *(_OWORD *)v10 = v21;
              *(_OWORD *)&v10[16] = 0LL;
              *(_OWORD *)&v10[32] = v21;
              serde_json::de::from_trait(v25, v10, &v10[16]);
              v7 = 1;
              if ( LOBYTE(v25[0]) == 6 )
                goto LABEL_17;
              *(_OWORD *)&v10[16] = v25[1];
              *(_OWORD *)v10 = v25[0];
              v7 = 1;
              if ( (unsigned __int8)core::ops::function::Fn::call(v10) )
              {
                v7 = 0;
                alloc::vec::Vec<T,A>::push(&v16, &v18, &off_1F8CBE0);
              }
              core::ptr::drop_in_place<serde_json::value::Value>(v10);
              if ( LOBYTE(v25[0]) == 6 )
LABEL_17:
                core::ptr::drop_in_place<core::result::Result<serde_json::value::Value,serde_json::error::Error>>(v25);
              core::ptr::drop_in_place<alloc::string::String>(&v20);
              if ( !v7 )
                goto LABEL_4;
            }
          }
          core::ptr::drop_in_place<alloc::string::String>(&v18);
        }
      }
LABEL_4:
      core::ptr::drop_in_place<dap::types::ModuleId>(v26);
    }
    core::ptr::drop_in_place<walkdir::Ancestor>(v3, *((_QWORD *)&v3 + 1));
  }
  core::ptr::drop_in_place<core::option::Option<rustyline::history::PathInfo>>(0x8000000000000000LL, *(_QWORD *)&v10[8]);
  core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<walkdir::IntoIter,forc_debug::cli::state::find_valid_json_files<forc_debug::cli::state::is_valid_abi>::{{closure}}>>(v30);
  result = v17;
  v9 = (_OWORD *)v22;
  *(_QWORD *)(v22 + 16) = v17;
  *v9 = v16;
  return result;
}