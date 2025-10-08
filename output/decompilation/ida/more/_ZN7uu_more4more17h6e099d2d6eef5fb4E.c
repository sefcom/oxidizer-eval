__int64 __fastcall uu_more::more(
        unsigned int a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rbp
  char v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // r13
  __int64 v19; // rax
  __int64 *v21; // r15
  __int64 *v22; // rbx
  __int64 v23; // r15
  __int64 v24; // rbp
  unsigned __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // [rsp+0h] [rbp-158h]
  __int64 v30; // [rsp+18h] [rbp-140h] BYREF
  unsigned __int64 v31; // [rsp+20h] [rbp-138h]
  __int64 v32; // [rsp+28h] [rbp-130h]
  __int128 v33; // [rsp+30h] [rbp-128h]
  __int128 v34; // [rsp+40h] [rbp-118h]
  __int128 v35; // [rsp+50h] [rbp-108h]
  __int128 v36; // [rsp+60h] [rbp-F8h]
  __int128 v37; // [rsp+70h] [rbp-E8h]
  __int128 v38; // [rsp+80h] [rbp-D8h]
  __int128 v39; // [rsp+90h] [rbp-C8h]
  _QWORD v40[3]; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v41; // [rsp+B8h] [rbp-A0h]
  __int128 v42; // [rsp+C8h] [rbp-90h]
  __int128 v43; // [rsp+D8h] [rbp-80h]
  __int128 v44; // [rsp+E8h] [rbp-70h]
  __int128 v45; // [rsp+F8h] [rbp-60h]
  __int128 v46; // [rsp+108h] [rbp-50h]
  __int128 v47; // [rsp+118h] [rbp-40h]

  crossterm::terminal::size(&v30);
  if ( (_BYTE)v30 == 1 )
  {
    v11 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v31);
    core::ptr::drop_in_place<std::fs::File>(a1);
    return v11;
  }
  if ( *(_BYTE *)(a8 + 32) )
    v12 = *(unsigned __int16 *)(a8 + 34);
  else
    v12 = WORD2(v30);
  uu_more::Pager::new(&v30, a1, v12, a6, a7, a8);
  v11 = v31;
  if ( v30 != 2 )
  {
    v13 = a8;
    v47 = v39;
    v46 = v38;
    v45 = v37;
    v44 = v36;
    v43 = v35;
    v42 = v34;
    v41 = v33;
    v40[0] = v30;
    v40[1] = v31;
    v40[2] = v32;
    v14 = a3;
    if ( !__OFSUB__(0LL, *(_QWORD *)a8) )
    {
      if ( (v30 & 1) == 0 )
      {
        v15 = crossterm::command::write_command_ansi(a2, 4LL);
        if ( v15 )
          goto LABEL_16;
        v15 = <std::io::stdio::Stdout as std::io::Write>::flush(a2);
        if ( v15 )
          goto LABEL_16;
        v15 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, aPatternNotFoun, 19LL);
        if ( v15 )
          goto LABEL_16;
        *(_QWORD *)&v45 = v45 - 1;
        if ( a3 )
        {
LABEL_11:
          v15 = crossterm::command::write_command_ansi(a2, 4LL);
          if ( v15 || (v15 = <std::io::stdio::Stdout as std::io::Write>::flush(a2)) != 0 )
          {
LABEL_16:
            v16 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
LABEL_17:
            v11 = v16;
LABEL_29:
            core::ptr::drop_in_place<uu_more::Pager>(v40);
            return v11;
          }
          if ( !a4 )
            a5 = 0LL;
          v17 = 1LL;
          if ( a4 )
            v17 = a4;
          alloc::str::<impl str>::replace(&v30, v17, a5);
          v18 = v31;
          v19 = <std::io::stdio::Stdout as std::io::Write>::write_all(a2, v31, v32);
          if ( v19 )
          {
            v11 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v19);
            core::ptr::drop_in_place<alloc::string::String>(v30, v18);
            goto LABEL_29;
          }
          core::ptr::drop_in_place<alloc::string::String>(v30, v18);
          *(_QWORD *)&v45 = v45 - 3;
          v14 = a3;
        }
LABEL_28:
        v11 = uu_more::Pager::draw(v40, a2, 1114112LL);
        if ( v11 )
          goto LABEL_29;
        if ( v14 )
        {
          *(_QWORD *)(a8 + 24) = 0LL;
          *(_QWORD *)&v45 = v45 + 3;
        }
        if ( ((unsigned __int8)uu_more::Pager::should_close(v40) & (a6 == 0)) != 0 )
        {
          v11 = 0LL;
          goto LABEL_29;
        }
        v21 = &v30;
        while ( 1 )
        {
          while ( 1 )
          {
            do
            {
              crossterm::event::poll(v21, 0LL, 10000000LL);
              if ( (_BYTE)v30 == 1 )
              {
LABEL_78:
                v16 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v31);
                goto LABEL_17;
              }
            }
            while ( (v30 & 0x100) == 0 );
            crossterm::event::read(v21);
            v22 = v21;
            v23 = v13;
            v24 = v30;
            v25 = v31;
            if ( v30 == 0x8000000000000006LL )
              goto LABEL_78;
            if ( (v30 ^ 0x8000000000000000LL) == 2 )
              break;
            if ( (v30 ^ 0x8000000000000000LL) == 5 )
            {
              v27 = 1114112LL;
              uu_more::Pager::page_resize(
                v40,
                (unsigned int)v31,
                v31 >> 16,
                *(unsigned int *)(v23 + 32),
                *(unsigned __int16 *)(v23 + 34));
              goto LABEL_43;
            }
LABEL_36:
            core::ptr::drop_in_place<crossterm::event::Event>(v30, v31);
            v13 = v23;
            v21 = v22;
          }
          if ( BYTE2(v32) )
          {
            if ( BYTE2(v32) != 1 )
              goto LABEL_36;
          }
          else if ( (_BYTE)v31 == 15 )
          {
            if ( (_BYTE)v32 == 2 )
            {
              if ( HIDWORD(v31) == 99 )
                goto LABEL_82;
            }
            else if ( !(_BYTE)v32 && HIDWORD(v31) == 113 )
            {
LABEL_82:
              v11 = 0LL;
LABEL_83:
              core::ptr::drop_in_place<crossterm::event::Event>(v24, v25);
              goto LABEL_29;
            }
          }
          if ( (_BYTE)v32 )
          {
LABEL_64:
            if ( (_BYTE)v31 != 15 )
              goto LABEL_36;
            v27 = HIDWORD(v31);
          }
          else
          {
            switch ( (char)v31 )
            {
              case 4:
              case 8:
                v11 = uu_more::Pager::page_up(v40);
                if ( v11 )
                  goto LABEL_83;
                v11 = uu_more::paging_add_back_message(v23, a2);
                v27 = 1114112LL;
                if ( v11 )
                  goto LABEL_83;
                break;
              case 5:
              case 9:
                goto LABEL_74;
              case 15:
                if ( HIDWORD(v31) == 32 )
                {
LABEL_74:
                  if ( (unsigned __int8)uu_more::Pager::should_close(v40) )
                    goto LABEL_82;
                  v27 = 1114112LL;
                  uu_more::Pager::page_down(v40);
                }
                else if ( HIDWORD(v31) == 106 )
                {
                  if ( (unsigned __int8)uu_more::Pager::should_close(v40) )
                    goto LABEL_82;
                  v27 = 1114112LL;
                  uu_more::Pager::next_line(v40);
                }
                else
                {
                  if ( HIDWORD(v31) != 107 )
                    goto LABEL_64;
                  v27 = 1114112LL;
                  uu_more::Pager::prev_line(v40);
                }
                break;
              default:
                goto LABEL_64;
            }
          }
LABEL_43:
          core::ptr::drop_in_place<crossterm::event::Event>(v24, v25);
          v13 = v23;
          if ( *(_BYTE *)(v23 + 37) )
          {
            v26 = a2;
            v15 = crossterm::command::write_command_ansi(a2);
            v21 = v22;
            if ( v15 )
              goto LABEL_16;
            v15 = crossterm::command::write_command_ansi(a2, 2LL);
            if ( v15 )
              goto LABEL_16;
            v15 = <std::io::stdio::Stdout as std::io::Write>::flush(a2);
            if ( v15 )
              goto LABEL_16;
          }
          else
          {
            v26 = a2;
            v21 = v22;
            if ( *(_BYTE *)(v13 + 36) )
            {
              v15 = crossterm::command::write_command_ansi(a2, 0LL);
              if ( v15 )
                goto LABEL_16;
              v15 = crossterm::command::write_command_ansi(a2);
              if ( v15 )
                goto LABEL_16;
              v15 = <std::io::stdio::Stdout as std::io::Write>::flush(a2);
              if ( v15 )
                goto LABEL_16;
            }
          }
          v11 = uu_more::Pager::draw(v40, v26, v27);
          if ( v11 )
            goto LABEL_29;
        }
      }
      *((_QWORD *)&v44 + 1) = v31;
    }
    if ( a3 )
      goto LABEL_11;
    goto LABEL_28;
  }
  return v11;
}