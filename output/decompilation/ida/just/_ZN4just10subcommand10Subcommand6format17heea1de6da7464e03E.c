__int64 __fastcall just::subcommand::Subcommand::format(_WORD *a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 i; // r15
  char v15; // bp
  char v16; // r12
  int v17; // edx
  int v18; // eax
  char v19; // cl
  const char *v20; // r14
  char v21; // si
  char v22; // di
  char v23; // r8
  char v24; // r9
  char v25; // r10
  char v26; // r11
  char v27; // bl
  __int64 v29; // rax
  _WORD *v30; // rbx
  char v31; // al
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm2
  __int64 v35; // [rsp+0h] [rbp-2B8h] BYREF
  int v36; // [rsp+8h] [rbp-2B0h]
  int v37; // [rsp+Ch] [rbp-2ACh]
  __int64 v38; // [rsp+10h] [rbp-2A8h]
  _BYTE v39[8]; // [rsp+18h] [rbp-2A0h] BYREF
  int v40; // [rsp+20h] [rbp-298h]
  int v41; // [rsp+24h] [rbp-294h]
  _BYTE *v42; // [rsp+28h] [rbp-290h]
  _WORD *v43; // [rsp+30h] [rbp-288h]
  __int64 *v44; // [rsp+38h] [rbp-280h] BYREF
  __int128 v45; // [rsp+40h] [rbp-278h]
  __int64 (__fastcall *v46)(); // [rsp+50h] [rbp-268h]
  _OWORD *v47; // [rsp+58h] [rbp-260h]
  __int64 (__fastcall *v48)(); // [rsp+60h] [rbp-258h]
  _BYTE *v49; // [rsp+68h] [rbp-250h]
  __int64 (__fastcall *v50)(); // [rsp+70h] [rbp-248h]
  char v51[8]; // [rsp+78h] [rbp-240h] BYREF
  __int64 v52; // [rsp+80h] [rbp-238h]
  __int64 v53; // [rsp+88h] [rbp-230h]
  _BYTE v54[104]; // [rsp+90h] [rbp-228h] BYREF
  __int64 v55; // [rsp+F8h] [rbp-1C0h]
  __int128 v56; // [rsp+100h] [rbp-1B8h] BYREF
  __int128 v57; // [rsp+110h] [rbp-1A8h]
  __int128 v58; // [rsp+120h] [rbp-198h]
  __int128 v59; // [rsp+130h] [rbp-188h]
  __int128 v60; // [rsp+140h] [rbp-178h]
  _BYTE v61[23]; // [rsp+150h] [rbp-168h]
  const char *v62; // [rsp+168h] [rbp-150h] BYREF
  __int64 v63; // [rsp+170h] [rbp-148h]
  _QWORD v64[6]; // [rsp+178h] [rbp-140h] BYREF
  _OWORD v65[3]; // [rsp+1A8h] [rbp-110h] BYREF
  __int64 v66; // [rsp+1D8h] [rbp-E0h]
  _OWORD v67[3]; // [rsp+1E0h] [rbp-D8h] BYREF
  __int64 v68; // [rsp+210h] [rbp-A8h]
  _OWORD v69[6]; // [rsp+220h] [rbp-98h] BYREF
  __int64 v70; // [rsp+280h] [rbp-38h]

  v38 = a4;
  v5 = just::compilation::Compilation::root_src(a4);
  v7 = v6;
  v8 = just::compilation::Compilation::root_ast(v38);
  if ( !a2[420] && !*(_BYTE *)(v38 + 491) )
  {
    *a1 = 54;
    return core::ptr::drop_in_place<just::compilation::Compilation>(v38);
  }
  <T as alloc::string::SpecToString>::spec_to_string(v51, v8);
  v43 = a1;
  v9 = v52;
  v10 = v53;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v52, v53, v5, v7) )
  {
    *(_BYTE *)v43 = 56;
    core::ptr::drop_in_place<alloc::string::String>(v51);
    return core::ptr::drop_in_place<just::compilation::Compilation>(v38);
  }
  if ( a2[407] )
  {
    if ( a2[423] )
    {
      v42 = a2;
      *(_QWORD *)v54 = 2LL;
      *(_WORD *)&v54[24] = 513;
      similar::text::TextDiffConfig::diff_lines(&v56, v54, v5, v7, v9, v10);
      if ( (_QWORD)v57 )
      {
        v11 = *((_QWORD *)&v56 + 1);
        v55 = *((_QWORD *)&v56 + 1) + 40 * v57;
        v12 = *((_QWORD *)&v56 + 1) + 40LL;
        v42 += 388;
        do
        {
          v13 = v11;
          v11 = v12;
          similar::text::TextDiff<T>::iter_changes(v69, &v56, v13);
          *(_QWORD *)&v54[96] = v70;
          *(_OWORD *)&v54[80] = v69[5];
          *(_OWORD *)&v54[64] = v69[4];
          *(_OWORD *)&v54[48] = v69[3];
          *(_OWORD *)&v54[32] = v69[2];
          *(_OWORD *)&v54[16] = v69[1];
          *(_OWORD *)v54 = v69[0];
          for ( i = v11; ; v11 = i )
          {
            <similar::iter::ChangesIter<Old,New,T> as core::iter::traits::iterator::Iterator>::next(v65, v54);
            if ( LODWORD(v65[0]) == 2 )
              break;
            v68 = v66;
            v67[2] = v65[2];
            v67[1] = v65[1];
            v67[0] = v65[0];
            if ( (_BYTE)v66 )
            {
              if ( (unsigned __int8)v66 == 1 )
              {
                just::color::Color::stdout((__int64)&v44, (__int64)v42);
                v15 = (char)v44;
                v16 = BYTE9(v45);
                v17 = 10;
                v18 = 1;
                v19 = 0;
                v20 = asc_9E5A5;
              }
              else
              {
                just::color::Color::stdout((__int64)&v44, (__int64)v42);
                v15 = (char)v44;
                v16 = BYTE9(v45);
                v17 = 10;
                v18 = 2;
                v19 = 0;
                v20 = (const char *)&unk_714D1;
              }
              v21 = 0;
              v22 = 0;
              v23 = 0;
              v24 = 0;
              v25 = 0;
              v26 = 0;
              v27 = 0;
              v62 = v20;
              v63 = 1LL;
              if ( v16 == 2 )
                goto LABEL_22;
            }
            else
            {
              just::color::Color::stdout((__int64)&v44, (__int64)v42);
              v15 = (char)v44;
              v19 = BYTE1(v44);
              v21 = BYTE2(v44);
              v22 = BYTE3(v44);
              v23 = BYTE4(v44);
              v24 = BYTE5(v44);
              v25 = BYTE6(v44);
              v26 = HIBYTE(v44);
              v27 = v45;
              v18 = *(_DWORD *)((char *)&v45 + 1);
              v17 = *(_DWORD *)((char *)&v45 + 5);
              v16 = BYTE9(v45);
              v62 = asc_6E4F0;
              v63 = 1LL;
              if ( BYTE9(v45) == 2 )
                goto LABEL_22;
            }
            if ( v16 != 1 || (v15 & 1) != 0 )
            {
              LOBYTE(v35) = v19;
              BYTE1(v35) = v21;
              BYTE2(v35) = v22;
              BYTE3(v35) = v23;
              BYTE4(v35) = v24;
              BYTE5(v35) = v25;
              BYTE6(v35) = v26;
              HIBYTE(v35) = v27;
              goto LABEL_23;
            }
LABEL_22:
            v35 = 0LL;
            v18 = 10;
            v19 = 0;
            v17 = 10;
            v21 = 0;
            v22 = 0;
            v23 = 0;
            v24 = 0;
            v25 = 0;
            v26 = 0;
            v27 = 0;
LABEL_23:
            v39[0] = v19;
            v39[1] = v21;
            v39[2] = v22;
            v39[3] = v23;
            v39[4] = v24;
            v39[5] = v25;
            v39[6] = v26;
            v39[7] = v27;
            v36 = v18;
            v40 = v18;
            v37 = v17;
            v41 = v17;
            v44 = &v35;
            *(_QWORD *)&v45 = <ansi_term::ansi::Prefix as core::fmt::Display>::fmt;
            *((_QWORD *)&v45 + 1) = &v62;
            v46 = <&T as core::fmt::Display>::fmt;
            v47 = v67;
            v48 = similar::types::text_additions::<impl core::fmt::Display for similar::types::Change<&T>>::fmt;
            v49 = v39;
            v50 = <ansi_term::ansi::Suffix as core::fmt::Display>::fmt;
            v64[0] = &unk_9E550;
            v64[1] = 4LL;
            v64[4] = 0LL;
            v64[2] = &v44;
            v64[3] = 4LL;
            std::io::stdio::_print(v64);
          }
          v12 = v11 + 40;
        }
        while ( v11 != v55 );
      }
      core::ptr::drop_in_place<similar::text::TextDiff<str>>(&v56);
    }
    *(_BYTE *)v43 = 24;
    core::ptr::drop_in_place<alloc::string::String>(v51);
  }
  else
  {
    v29 = std::fs::write(a3, v51);
    v30 = v43;
    if ( v29 )
    {
      just::subcommand::Subcommand::format::{{closure}}(v54, *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 16), v29);
      v31 = v54[0];
      v56 = *(_OWORD *)&v54[1];
      v57 = *(_OWORD *)&v54[17];
      v58 = *(_OWORD *)&v54[33];
      v59 = *(_OWORD *)&v54[49];
      v60 = *(_OWORD *)&v54[65];
      *(_OWORD *)v61 = *(_OWORD *)&v54[81];
      *(_QWORD *)&v61[15] = *(_QWORD *)&v54[96];
      if ( v54[0] != 56 )
      {
        *((_QWORD *)v43 + 12) = *(_QWORD *)&v61[15];
        *(_OWORD *)((char *)v30 + 81) = *(_OWORD *)v61;
        *(_OWORD *)((char *)v30 + 65) = v60;
        v32 = v56;
        v33 = v57;
        v34 = v58;
        *(_OWORD *)((char *)v30 + 49) = v59;
        *(_OWORD *)((char *)v30 + 33) = v34;
        *(_OWORD *)((char *)v30 + 17) = v33;
        *(_OWORD *)((char *)v30 + 1) = v32;
        *(_BYTE *)v30 = v31;
        return core::ptr::drop_in_place<just::compilation::Compilation>(v38);
      }
    }
    if ( a2[423] )
    {
      v56 = *(_OWORD *)(a3 + 8);
      v44 = (__int64 *)&v56;
      *(_QWORD *)&v45 = <std::path::Display as core::fmt::Display>::fmt;
      *(_QWORD *)v54 = &off_431158;
      *(_QWORD *)&v54[8] = 2LL;
      *(_QWORD *)&v54[32] = 0LL;
      *(_QWORD *)&v54[16] = &v44;
      *(_QWORD *)&v54[24] = 1LL;
      std::io::stdio::_eprint(v54);
    }
    *(_BYTE *)v43 = 56;
  }
  return core::ptr::drop_in_place<just::compilation::Compilation>(v38);
}