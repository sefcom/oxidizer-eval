        __int64 a9)
{
  unsigned __int16 v10; // ax
  unsigned int v11; // edx
  unsigned int v12; // ebp
  char v13; // bp
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  char should_close; // al
  unsigned __int64 v22; // rax
  __int64 (__fastcall *v23)(); // rbp
  __int64 v24; // rax
  char v25; // al
  __int64 v26; // rax
  char v27; // al
  __int64 v29; // [rsp+8h] [rbp-E0h] BYREF
  char v30; // [rsp+10h] [rbp-D8h]
  unsigned __int16 v31; // [rsp+12h] [rbp-D6h]
  int v32; // [rsp+14h] [rbp-D4h]
  char v33; // [rsp+18h] [rbp-D0h]
  char v34; // [rsp+1Ah] [rbp-CEh]
  _QWORD v35[3]; // [rsp+20h] [rbp-C8h] BYREF
  int v36; // [rsp+3Ch] [rbp-ACh]
  char v37[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+48h] [rbp-A0h]
  __int64 v39; // [rsp+50h] [rbp-98h]
  __int64 v40; // [rsp+58h] [rbp-90h]
  __int16 v41; // [rsp+80h] [rbp-68h]
  __int64 v42; // [rsp+88h] [rbp-60h]
  __int64 v43; // [rsp+90h] [rbp-58h]
  __int64 v44; // [rsp+98h] [rbp-50h]
  _BYTE v45[72]; // [rsp+A0h] [rbp-48h] BYREF

  v43 = a6;
  v42 = a5;
  v36 = a4;
  v44 = a2;
  crossterm::terminal::size(v37);
  v10 = core::result::Result<T,E>::unwrap(v37);
  v12 = v11;
  if ( *(_WORD *)(a9 + 32) )
    v12 = *(unsigned __int16 *)(a9 + 34);
  uu_more::break_buff(v45, a1, v44, v10);
  uu_more::Pager::new(v37, v12, v45, a7, a8, a9);
  v13 = v36;
  if ( *(_QWORD *)a9 != 0x8000000000000000LL )
  {
    if ( !uu_more::search_pattern_in_file(v38, v39, a9) )
    {
      v20 = crossterm::command::write_command_ansi(a3, 4LL);
      if ( v20
        || (v20 = <std::io::stdio::Stdout as std::io::Write>::flush(a3)) != 0
        || (v20 = <std::io::stdio::Stdout as std::io::Write>::write_all(a3, aPatternNotFoun, 19LL)) != 0 )
      {
        v19 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
        goto LABEL_71;
      }
      --v41;
      if ( (_BYTE)v36 )
        goto LABEL_7;
      goto LABEL_20;
    }
    v40 = v14;
  }
  if ( (_BYTE)v36 )
  {
LABEL_7:
    v15 = crossterm::command::write_command_ansi(a3, 4LL);
    if ( !v15 )
      v15 = <std::io::stdio::Stdout as std::io::Write>::flush(a3);
    core::result::Result<T,E>::unwrap(v15, &off_1629A8);
    v16 = 1LL;
    if ( v42 )
      v16 = v42;
    v17 = v43;
    if ( !v42 )
      v17 = 0LL;
    alloc::str::<impl str>::replace(v35, v16, v17);
    v18 = <std::io::stdio::Stdout as std::io::Write>::write_all(a3, v35[1], v35[2]);
    if ( v18 )
    {
      v19 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
      core::ptr::drop_in_place<alloc::string::String>(v35);
      goto LABEL_71;
    }
    core::ptr::drop_in_place<alloc::string::String>(v35);
    v41 -= 3;
  }
LABEL_20:
  uu_more::Pager::draw(
    v37,
    a3,
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter);
  if ( v13 )
  {
    *(_QWORD *)(a9 + 24) = 0LL;
    v41 += 3;
  }
  should_close = uu_more::Pager::should_close(v37);
  if ( !a7 && should_close )
  {
    v19 = 0LL;
    goto LABEL_71;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      do
        crossterm::event::poll(v35, 0LL, 10000000LL);
      while ( !(unsigned __int8)core::result::Result<T,E>::unwrap(v35) );
      crossterm::event::read(v35);
      core::result::Result<T,E>::unwrap(&v29, v35);
      v22 = 4LL;
      if ( (v29 ^ 0x8000000000000000LL) < 6 )
        v22 = v29 ^ 0x8000000000000000LL;
      if ( v22 == 2 )
        break;
      if ( v22 == 5 )
      {
        uu_more::Pager::page_resize(v37, v31, *(unsigned int *)(a9 + 32));
LABEL_33:
        v23 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter;
        goto LABEL_34;
      }
LABEL_26:
      core::ptr::drop_in_place<crossterm::event::Event>(&v29);
    }
    if ( v34 )
    {
      if ( v34 != 2 )
      {
        v25 = v30;
LABEL_53:
        switch ( v25 )
        {
          case 4:
          case 8:
            if ( v33 )
              goto LABEL_26;
            uu_more::Pager::page_up(v37);
            v19 = uu_more::paging_add_back_message(*(unsigned int *)(a9 + 32), a3);
            v23 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter;
            if ( v19 )
              goto LABEL_70;
            goto LABEL_34;
          case 5:
          case 9:
            if ( v33 )
              goto LABEL_26;
            goto LABEL_64;
          case 15:
            v27 = v33;
            goto LABEL_58;
          default:
            goto LABEL_26;
        }
      }
      goto LABEL_26;
    }
    v25 = v30;
    if ( v30 != 15 )
      goto LABEL_53;
    v27 = v33;
    if ( v33 == 2 )
    {
      if ( v32 == 99 )
      {
LABEL_74:
        uu_more::reset_term(a3);
        std::process::exit(0);
      }
      LODWORD(v23) = v32;
      goto LABEL_34;
    }
    if ( v33 )
    {
LABEL_58:
      LODWORD(v23) = v32;
      if ( v27 )
        goto LABEL_34;
    }
    else
    {
      if ( v32 == 113 )
        goto LABEL_74;
      LODWORD(v23) = v32;
    }
    if ( (_DWORD)v23 == 32 )
      break;
    if ( (_DWORD)v23 == 107 )
    {
      uu_more::Pager::prev_line(v37);
      goto LABEL_33;
    }
    if ( (_DWORD)v23 == 106 )
    {
      if ( (unsigned __int8)uu_more::Pager::should_close(v37) )
        goto LABEL_69;
      uu_more::Pager::next_line(v37);
      goto LABEL_33;
    }
LABEL_34:
    core::ptr::drop_in_place<crossterm::event::Event>(&v29);
    if ( *(_BYTE *)(a9 + 37) )
    {
      v29 = std::io::stdio::stdout();
      v24 = crossterm::command::write_command_ansi(&v29, 0LL, 0LL);
      if ( !v24 )
      {
        v24 = crossterm::command::write_command_ansi(&v29, 2LL);
        if ( !v24 )
        {
          v35[0] = std::io::stdio::stdout();
          v24 = <std::io::stdio::Stdout as std::io::Write>::flush(v35);
        }
      }
      core::result::Result<T,E>::unwrap(v24, &off_162A08);
    }
    else if ( *(_BYTE *)(a9 + 36) )
    {
      v29 = std::io::stdio::stdout();
      v26 = crossterm::command::write_command_ansi(&v29, 0LL);
      if ( !v26 )
      {
        v26 = crossterm::command::write_command_ansi(&v29, 0LL, 0LL);
        if ( !v26 )
        {
          v35[0] = std::io::stdio::stdout();
          v26 = <std::io::stdio::Stdout as std::io::Write>::flush(v35);
        }
      }
      core::result::Result<T,E>::unwrap(v26, &off_1629F0);
    }
    uu_more::Pager::draw(v37, a3, (unsigned int)v23);
  }
LABEL_64:
  if ( !(unsigned __int8)uu_more::Pager::should_close(v37) )
  {
    uu_more::Pager::page_down(v37);
    goto LABEL_33;
  }
LABEL_69:
  v19 = 0LL;
LABEL_70:
  core::ptr::drop_in_place<crossterm::event::Event>(&v29);
LABEL_71:
  core::ptr::drop_in_place<uu_more::Pager>(v37);
  return v19;
}
