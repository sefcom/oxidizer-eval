__int64 *__fastcall alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::regex_search_internal(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  bool v9; // cf
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  void (__fastcall *v12)(_QWORD *, _QWORD **); // rcx
  unsigned int v13; // ebx
  int v14; // ecx
  unsigned int v15; // ebp
  __int64 v16; // r14
  unsigned int v17; // ecx
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r13
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // rdi
  unsigned int started; // eax
  unsigned int v27; // edx
  unsigned int v28; // edx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned int v31; // edx
  unsigned int v32; // edx
  unsigned int v33; // edx
  unsigned int v34; // r15d
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int16 v37; // bp
  __int64 v38; // rdx
  unsigned int v39; // ebx
  unsigned int v40; // edx
  unsigned __int64 v41; // r12
  __int64 v42; // rbp
  unsigned int v43; // edx
  __int64 (__fastcall **v44)(); // rbx
  __int64 *result; // rax
  __int64 *v46; // rcx
  int v47; // edx
  __int64 v48; // rax
  unsigned int v49; // eax
  __int64 v50; // rcx
  unsigned int v51; // [rsp+8h] [rbp-140h]
  int v52; // [rsp+Ch] [rbp-13Ch] BYREF
  __int64 v53; // [rsp+10h] [rbp-138h]
  __int64 v54; // [rsp+18h] [rbp-130h]
  __int64 v55; // [rsp+20h] [rbp-128h]
  __int64 v56; // [rsp+28h] [rbp-120h]
  __int64 v57; // [rsp+30h] [rbp-118h]
  _QWORD v58[3]; // [rsp+38h] [rbp-110h] BYREF
  __int64 v59; // [rsp+50h] [rbp-F8h]
  __int64 v60; // [rsp+58h] [rbp-F0h]
  int v61; // [rsp+60h] [rbp-E8h]
  unsigned int v62; // [rsp+64h] [rbp-E4h]
  __int64 *v63; // [rsp+68h] [rbp-E0h]
  __int64 v64; // [rsp+70h] [rbp-D8h]
  int v65; // [rsp+78h] [rbp-D0h]
  unsigned int v66; // [rsp+7Ch] [rbp-CCh]
  _QWORD *v67; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v68; // [rsp+88h] [rbp-C0h]
  unsigned int v69; // [rsp+90h] [rbp-B8h]
  __int64 v70; // [rsp+98h] [rbp-B0h]
  int v71; // [rsp+A0h] [rbp-A8h]
  __int64 v72; // [rsp+A8h] [rbp-A0h]
  __int64 v73; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v74; // [rsp+B8h] [rbp-90h] BYREF
  _QWORD *v75; // [rsp+C0h] [rbp-88h]
  unsigned __int64 v76; // [rsp+C8h] [rbp-80h]
  unsigned __int64 v77; // [rsp+D0h] [rbp-78h]
  void (__fastcall *v78)(_QWORD *, _QWORD **); // [rsp+D8h] [rbp-70h]
  _QWORD *v79; // [rsp+E0h] [rbp-68h]
  int v80; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v81; // [rsp+F0h] [rbp-58h]
  _BYTE v82[25]; // [rsp+F8h] [rbp-50h] BYREF

  v62 = a6;
  v72 = a5;
  LODWORD(v57) = a4;
  v60 = a3;
  v63 = a1;
  v7 = a2[24];
  v8 = a2[10];
  v9 = v8 < v7;
  v10 = v8 - v7;
  v54 = 0LL;
  if ( v9 )
    v10 = 0LL;
  v76 = v10;
  v11 = a2[23] - 1LL;
  v12 = (void (__fastcall *)(_QWORD *, _QWORD **))<alacritty_terminal::grid::GridIterator<T> as alacritty_terminal::grid::BidirectionalIterator>::prev;
  if ( *(_BYTE *)(a7 + 1072) )
    v12 = (void (__fastcall *)(_QWORD *, _QWORD **))<alacritty_terminal::grid::GridIterator<T> as core::iter::traits::iterator::Iterator>::next;
  v78 = v12;
  v80 = *(unsigned __int8 *)(a7 + 1073);
  v81 = 1LL;
  memset(v82, 0, sizeof(v82));
  v56 = a7 + 720;
  regex_automata::hybrid::dfa::DFA::start_state_forward(&v67, a7, a7 + 720, &v80);
  v13 = core::result::Result<T,E>::unwrap(&v67);
  v77 = v7;
  v75 = a2 + 5;
  v67 = a2 + 5;
  v68 = v60;
  v69 = v57;
  v64 = v11;
  v70 = v11;
  v65 = v7 - 1;
  v71 = v7 - 1;
  v73 = alacritty_terminal::grid::GridIterator<T>::cell((__int64)&v67);
  v14 = *(unsigned __int8 *)(a7 + 1072);
  v79 = a2;
  alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::skip_fullwidth(
    (__int64)a2,
    (__int64)&v67,
    (__int64)&v73,
    v14);
  v15 = *(_DWORD *)(v73 + 16);
  v61 = *(_BYTE *)(alacritty_terminal::grid::GridIterator<T>::cell((__int64)&v67) + 20) >> 4;
  v16 = v68;
  v17 = v69;
  v59 = v69;
  v57 = v68;
  v60 = 0LL;
  v53 = 0LL;
  while ( 1 )
  {
    v20 = v57;
    v21 = (unsigned int)v59;
    v59 = v17;
    v57 = v16;
    v52 = 0;
    core::char::methods::encode_utf8_raw(v15, &v52);
    if ( !v22 )
    {
      v24 = a7;
      started = v51;
      v21 = v55;
      goto LABEL_55;
    }
    v23 = v22;
    v24 = a7;
    if ( *(_BYTE *)(a7 + 1072) )
    {
      v25 = 0LL;
    }
    else
    {
      v25 = v22 - 1;
      if ( v22 > 4 )
        goto LABEL_104;
    }
    if ( (regex_automata::hybrid::dfa::DFA::next_state(a7, v56, v13, *((unsigned __int8 *)&v52 + v25)) & 1) != 0 )
    {
LABEL_84:
      v44 = (__int64 (__fastcall **)())&unk_877B88;
      result = (__int64 *)alloc::boxed::Box<T>::new();
      goto LABEL_86;
    }
    v13 = v27;
    if ( (v27 & 0x8000000) != 0 )
    {
      v54 = (unsigned int)(v54 + 1);
      goto LABEL_19;
    }
    if ( (v27 & 0x40000000) == 0 )
    {
      v54 = (unsigned int)(v54 + 1);
      v21 = v51;
      v20 = v55;
      goto LABEL_20;
    }
    if ( (_DWORD)v54 != 1 )
      goto LABEL_100;
    regex_automata::hybrid::dfa::DFA::start_state_forward(v58, a7, v56, &v80);
    if ( (v58[0] & 1) != 0 )
      goto LABEL_85;
    v13 = HIDWORD(v58[0]);
    v52 = 0;
    started = core::char::methods::encode_utf8_raw(v15, &v52);
    if ( v29 )
    {
      v23 = v29;
      v25 = v29 - 1;
      v30 = 0LL;
      if ( !*(_BYTE *)(a7 + 1072) )
      {
        v30 = v29 - 1;
        if ( v29 > 4 )
          goto LABEL_104;
      }
      if ( (regex_automata::hybrid::dfa::DFA::next_state(a7, v56, v13, *((unsigned __int8 *)&v52 + v30)) & 1) != 0 )
        goto LABEL_84;
      v13 = v31;
      v54 = 1LL;
      if ( (v31 & 0x8000000) == 0 )
      {
        v53 = 0LL;
        if ( (v31 & 0x40000000) != 0 )
          goto LABEL_100;
LABEL_20:
        if ( v23 == 1 )
        {
          started = v21;
          v21 = v20;
          goto LABEL_55;
        }
        v25 = 1LL;
        if ( !*(_BYTE *)(a7 + 1072) )
        {
          v25 = v23 - 2;
          if ( v23 - 2 > 3 )
            goto LABEL_104;
        }
        if ( (regex_automata::hybrid::dfa::DFA::next_state(a7, v56, v13, *((unsigned __int8 *)&v52 + v25)) & 1) != 0 )
          goto LABEL_84;
        v13 = v28;
        if ( (v28 & 0x40000000) != 0 )
        {
          v51 = v21;
          v55 = v20;
          if ( (_DWORD)v54 != 1 )
            goto LABEL_100;
          regex_automata::hybrid::dfa::DFA::start_state_forward(v58, a7, v56, &v80);
          if ( (v58[0] & 1) != 0 )
            goto LABEL_85;
          v13 = HIDWORD(v58[0]);
          v53 = 0LL;
          v54 = 0LL;
          if ( v23 == 2 )
            goto LABEL_54;
        }
        else
        {
          v51 = v21;
          v21 = v20;
          v54 = (unsigned int)(v54 + 1);
          if ( v23 == 2 )
            goto LABEL_54;
        }
        v55 = v21;
        v25 = 2LL;
        if ( !*(_BYTE *)(a7 + 1072) )
        {
          v25 = v23 - 3;
          if ( v23 - 3 > 3 )
            goto LABEL_104;
        }
        if ( (regex_automata::hybrid::dfa::DFA::next_state(a7, v56, v13, *((unsigned __int8 *)&v52 + v25)) & 1) != 0 )
          goto LABEL_84;
        v13 = v32;
        if ( (v32 & 0x40000000) != 0 )
        {
          if ( (_DWORD)v54 != 1 )
            goto LABEL_100;
          regex_automata::hybrid::dfa::DFA::start_state_forward(v58, a7, v56, &v80);
          if ( (v58[0] & 1) != 0 )
            goto LABEL_85;
          v13 = HIDWORD(v58[0]);
          v53 = 0LL;
          v54 = 0LL;
          if ( v23 == 3 )
            goto LABEL_54;
        }
        else
        {
          v21 = v55;
          v54 = (unsigned int)(v54 + 1);
          if ( v23 == 3 )
          {
LABEL_54:
            started = v51;
            goto LABEL_55;
          }
        }
        v55 = v21;
        v25 = 3LL;
        if ( !*(_BYTE *)(a7 + 1072) )
        {
          v25 = v23 - 4;
          if ( v23 - 4 > 3 )
            goto LABEL_104;
        }
        if ( (regex_automata::hybrid::dfa::DFA::next_state(a7, v56, v13, *((unsigned __int8 *)&v52 + v25)) & 1) != 0 )
          goto LABEL_84;
        v13 = v33;
        if ( (v33 & 0x40000000) != 0 )
        {
          if ( (_DWORD)v54 != 1 )
            goto LABEL_100;
          regex_automata::hybrid::dfa::DFA::start_state_forward(v58, a7, v56, &v80);
          if ( (v58[0] & 1) != 0 )
          {
LABEL_85:
            result = (__int64 *)alloc::boxed::Box<T>::new(v58[1]);
            v44 = &off_877B10;
LABEL_86:
            v46 = v63;
            v63[1] = (__int64)result;
            v46[2] = (__int64)v44;
LABEL_87:
            *v46 = 2LL;
            return result;
          }
          v13 = HIDWORD(v58[0]);
          v53 = 0LL;
          v54 = 0LL;
          if ( v23 != 4 )
          {
LABEL_74:
            v41 = v23 - 5;
            v42 = 4LL;
            started = v51;
            while ( 1 )
            {
              if ( *(_BYTE *)(a7 + 1072) )
                core::panicking::panic_bounds_check(v42, 4LL, &off_877BF8);
              v55 = v21;
              v51 = started;
              if ( v41 >= 4 )
                break;
              if ( (regex_automata::hybrid::dfa::DFA::next_state(a7, v56, v13, *((unsigned __int8 *)&v52 + v41)) & 1) != 0 )
                goto LABEL_84;
              v13 = v43;
              if ( (v43 & 0x40000000) != 0 )
              {
                if ( (_DWORD)v54 != 1 )
                  goto LABEL_100;
                started = regex_automata::hybrid::dfa::DFA::start_state_forward(v58, a7, v56, &v80);
                if ( LODWORD(v58[0]) == 1 )
                  goto LABEL_85;
                v13 = HIDWORD(v58[0]);
                v54 = 0LL;
                v53 = 0LL;
                ++v42;
                v9 = v41-- != 0;
                if ( !v9 )
                  goto LABEL_55;
              }
              else
              {
                v54 = (unsigned int)(v54 + 1);
                started = v51;
                v21 = v55;
                ++v42;
                v9 = v41-- != 0;
                if ( !v9 )
                  goto LABEL_55;
              }
            }
            v25 = v41;
LABEL_104:
            core::panicking::panic_bounds_check(v25, 4LL, &off_877BE0);
          }
        }
        else
        {
          v21 = v55;
          v54 = (unsigned int)(v54 + 1);
          if ( v23 != 4 )
            goto LABEL_74;
        }
        goto LABEL_54;
      }
LABEL_19:
      v53 = 1LL;
      goto LABEL_20;
    }
    v54 = 0LL;
    v53 = 0LL;
LABEL_55:
    v18 = v53;
    v34 = started;
    if ( v60 & 1 | ((_DWORD)v59 == v62) & (unsigned __int8)(v57 == v72) )
      break;
    v78(v58, &v67);
    v35 = v58[0];
    if ( !v58[0] )
    {
      v67 = v75;
      v68 = v64 - v57;
      v69 = v77 + ~(v59 + v76);
      v70 = v64;
      v71 = v65;
      v35 = alacritty_terminal::grid::GridIterator<T>::cell((__int64)&v67);
    }
    v74 = v35;
    v36 = v62;
    LOBYTE(v36) = v69 == v62;
    v60 = v36;
    LOBYTE(v53) = v68 == v72;
    alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::skip_fullwidth(
      (__int64)v79,
      (__int64)&v67,
      (__int64)&v74,
      *(unsigned __int8 *)(v24 + 1072));
    v66 = *(_DWORD *)(v74 + 16);
    v37 = *(_WORD *)(alacritty_terminal::grid::GridIterator<T>::cell((__int64)&v67) + 20) & 0x10;
    v16 = v68;
    v17 = v69;
    if ( !(v68 | v57 ^ v64) && (v61 & 1) == 0 || !v57 && v68 == v64 && !v37 )
    {
      v38 = v13;
      v39 = v69;
      if ( (regex_automata::hybrid::dfa::DFA::next_eoi_state(a7, v56, v38) & 1) != 0 )
        goto LABEL_84;
      if ( (v40 & 0x8000000) != 0 )
        v18 = 1LL;
      if ( (v18 & 1) != 0 && (((int)v54 < 2) & (v40 >> 30)) == 0 && (_DWORD)v54 )
      {
        v49 = v59;
        if ( (v40 & 0x8000000) == 0 )
          v49 = v34;
        v50 = v57;
        if ( (v40 & 0x8000000) == 0 )
          v50 = v21;
        v51 = v49;
        v55 = v50;
        goto LABEL_99;
      }
      regex_automata::hybrid::dfa::DFA::start_state_forward(v58, a7, v56, &v80);
      if ( (v58[0] & 1) != 0 )
        goto LABEL_85;
      v54 = 0LL;
      v18 = 0LL;
      v17 = v39;
      v13 = HIDWORD(v58[0]);
    }
    v19 = v60;
    LOBYTE(v19) = v53 & v60;
    v60 = v19;
    v61 = v37 >> 4;
    v51 = v34;
    v55 = v21;
    v53 = v18;
    v15 = v66;
  }
  if ( (regex_automata::hybrid::dfa::DFA::next_eoi_state(v24, v56, v13) & 1) != 0 )
  {
    v48 = alloc::boxed::Box<T>::new();
    v46 = v63;
    v63[1] = v48;
    result = (__int64 *)&unk_877B88;
    v46[2] = (__int64)&unk_877B88;
    goto LABEL_87;
  }
  v53 = 1LL;
  v51 = v59;
  v55 = v57;
  if ( (v47 & 0x8000000) == 0 )
  {
    if ( (v47 & 0x40000000) == 0 )
    {
      v51 = v34;
      v55 = v21;
LABEL_99:
      v53 = v18;
      goto LABEL_100;
    }
    v51 = v34;
    v55 = v21;
    v53 = v18;
    if ( (_DWORD)v54 == 1 )
      v53 = 0LL;
  }
LABEL_100:
  result = v63;
  *v63 = v53;
  result[1] = v55;
  *((_DWORD *)result + 4) = v51;
  return result;
}