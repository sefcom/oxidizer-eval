fn fd::construct_config(a1: &struct24, a2: i64, a3: i64) -> : struct252 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x37b]
    let v1: u8;  // [bp-0x37b]
    let v2: u8;  // [bp-0x37a]
    let v3: u8;  // [bp-0x379]
    let v4: u8;  // [bp-0x378]
    let v5: u8;  // [bp-0x377]
    let v6: u8;  // [bp-0x376]
    let v7: u8;  // [bp-0x375]
    let v8: u8;  // [bp-0x374]
    let v9: u8;  // [bp-0x373]
    let v10: u8;  // [bp-0x372]
    let v11: u8;  // [bp-0x371]
    let v12: u64;  // [bp-0x370]
    let v13: struct312;  // [bp-0x364]
    let v14: void*;  // [bp-0x360]
    let v15: u64;  // [bp-0x358]
    let v16: u64;  // [bp-0x350]
    let v17: void*;  // [bp-0x348], Other Possible Types: struct712
    let v18: u32;  // [bp-0x340]
    let v19: u32;  // [bp-0x33c]
    let v20: u32;  // [bp-0x338]
    let v21: u32;  // [bp-0x334]
    let v22: u32;  // [bp-0x330]
    let v23: std::env::Args;  // [bp-0x32c]
    let v24: u128;  // [bp-0x328]
    let v25: u128;  // [bp-0x320]
    let v26: u64;  // [bp-0x318]
    let v27: Option<struct24>;  // [bp-0x310]
    let v28: u32;  // [bp-0x2f6]
    let v29: u16;  // [bp-0x2f2]
    let v30: u64;  // [bp-0x2f0]
    let v31: struct16;  // [bp-0x2e8]
    let v32: u64;  // [bp-0x2e0]
    let v33: struct76;  // [bp-0x2d8]
    let v34: u64;  // [bp-0x2d0]
    let v35: u64;  // [bp-0x2c8]
    let v36: struct24;  // [bp-0x2c0]
    let v37: struct24;  // [bp-0x2b8]
    let v38: struct76;  // [bp-0x2b0]
    let v39: u64;  // [bp-0x2a8]
    let v40: struct20;  // [bp-0x2a0]
    let v41: u64;  // [bp-0x298]
    let v42: u128;  // [bp-0x290]
    let v43: u64;  // [bp-0x288]
    let v44: struct16;  // [bp-0x280]
    let v45: struct16;  // [bp-0x278]
    let v46: struct16;  // [bp-0x268]
    let v47: struct56;  // [bp-0x260]
    let v48: u64;  // [bp-0x258]
    let v49: u64;  // [bp-0x250]
    let v50: Option<struct160>;  // [bp-0x248], Other Possible Types: Result<struct24, struct16>, struct16, struct24
    let v51: alloc::string::String;  // [bp-0x248]
    let v52: u64;  // [bp-0x240]
    let v53: u64;  // [bp-0x238]
    let v54: u64;  // [bp-0x1a8]
    let v55: iNone;  // [bp-0x1a8]
    let v56: iNone;  // [bp-0x198]
    let v57: Result<(), Error>;  // [bp-0x188]
    let v58: struct153;  // [bp-0x178]
    let v59: struct9;  // [bp-0x178]
    let v60: Result<struct32, struct32>;  // [bp-0x178]
    let v61: struct56;  // [bp-0x178]
    let v62: u128;  // [bp-0x178]
    let v63: struct48;  // [bp-0x178]
    let v64: struct56;  // [bp-0x170], Other Possible Types: u64
    let v65: u64;  // [bp-0x168]
    let v66: u32;  // [bp-0xd0]
    let v67: u64;  // [bp-0xd0]
    let v69: std::env::Args;  // r14d, Other Possible Types: u32
    let v70: u32;  // r14d
    let v72: void*;  // r12
    let v73: u32;  // eax
    let v74: struct24;  // eax
    let v75: struct312;  // ecx
    let v76: void*;  // r13, Other Possible Types: struct712
    let v77: core::option::Option<&str>;  // al, Other Possible Types: u8
    let v78: struct20;  // r12
    let v79: u8;  // cl
    let v80: u8;  // al
    let v81: Result<struct64, struct8>;  // esi
    let v82: struct24;  // rcx
    let v83: struct76;  // rax
    let v84: struct76;  // rax
    let v85: struct24;  // rcx
    let v88: struct76;  // r14
    let v89: struct16;  // rax
    let v90: u64;  // rdx
    let v91: u64;  // rsi
    let v92: struct16;  // rax
    let v93: u64;  // rax
    let v94: iNone;  // xmm0
    let v95: u64;  // rdx
    let v96: &mut [u8];  // rax:rdx
    let v97: Result<struct32, struct16>;  // [bp-0x248]

    if !a1[487] as i8 {
        v69 = v70 & -0x100 | 1;
        if !a1[486] as i8 {
            v50 = struct16 {
                field_0: a2
                field_8: a2 + a3 * 24
            };
            v69 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v50);
        }
    }
    v50 = struct24 {
        field_0: a1[408] as i128
        field_16: a1[424] as i64
    };
    *(&a1[408] as &i64) = 0x8000000000000000;
    v27 = core::option::Option<T>::or_else(&v50);
    if !((((0 ^ v27 as i64) & (0 ^ -(v27 as i64))) >> 63) as char) {
        v51 = <alloc::string::String as core::clone::Clone>::clone(&v27);
        *(&v62 as &i32) = vvar_905{stack -576};
        if v51.vec.buf.inner.cap.__0 == 0x8000000000000000 {
            goto LABEL_5facf3;
        }
        v25 = v62;
        v24 = v51.vec.buf.inner.cap.__0;
    } else {
LABEL_5facf3:
        v66 = 0;
        v96 = core::char::methods::encode_utf8_raw(47, &v66, a2);
        v50 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v96.data_ptr, a2);
        v26 = v53;
        v24 = v50.field_0;
    }
    v72 = a1[88] as i64;
    v12 = a1[96] as i64;
    v76 = a1[104] as i64;
    *(&a1[88] as &i64) = 0;
    *(&a1[96] as &i64) = 8;
    *(&a1[104] as &i64) = 0;
    v50 = fd::extract_time_constraints(a1);
    v16 = v50 as i64;
    match v50 {
        Err(_) => {
            return struct16 {
                field_0: 2
                field_8: v52
            };
        },
        Ok(_) => {
            v15 = v52;
            v39 = v53;
            if a1[432] as i32 != 3 {
                v45 = struct16 {
                    field_0: a1[432] as i32
                    field_4: a1[436] as i64
                    field_12: a1[444] as i32
                };
                v57 = fd::filter::owner::OwnerFilter::filter_ignore(&v45, v53, v52);
            }
            v14 = v72;
            std::io::stdio::stdout();
            v4 = std::sys::io::is_terminal::isatty::is_terminal();
            v73 = a1[501] as i8 as u8 as u32;
            if !v73 {
                v50 = std::env::var_os("NO_COLOR");
                if v50.field_0 as i64 != 0x8000000000000000 {
                    v17 = v76;
                    v76 = v17;
                    if !v53 {
                        goto LABEL_5fae90;
                    }
                } else {
LABEL_5fae90:
                    if v4 {
LABEL_5fae97:
                        v50 = lscolors::LsColors::from_env();
                        match v50 {
                            None => {
                                v58 = lscolors::LsColors::from_string("\now=0:or=0;38;5;16;48;5;203:no=0:ex=1;38;5;203:cd=0;38;5;203;48;5;236:mi=0;38;5;16;48;5;203:*~=0;38;5;243:st=0:pi=0;38;5;16;48;5;81:fi=0:di=0;38;5;81:so=0;38;5;16;48;5;203:bd=0;38;5;81;48;5;236:tw=0:ln=0;38;5;203:*.m=0;38;5;48:*.o=0;38;5;243:*.z=4;38;5;203:*.a=1;38;5;203:*.r=0;38;5;48:*.c=0;38;5;48:*.d=0;38;5;48:*.t=0;38;5;48:*.h=0;38;5;48:*.p=0;38;5;48:*.cc=0;38;5;48:*.ll=0;38;5;48:*.jl=0;38;5;48:*css=0;38;5;48:*.md=0;38;5;185:*.gz=4;38;5;203:*.nb=0;38;5;48:*.mn=0;38;5;48:*.go=0;38;5;48:*.xz=4;38;5;203:*.so=1;38;5;203:*.rb=0;38;5;48:*.pm=0;38;5;48:*.bc=0;38;5;243:*.py=0;38;5;48:*.as=0;38;5;48:*.pl=0;38;5;48:*.rs=0;38;5;48:*.sh=0;38;5;48:*.7z=4;38;5;203:*.ps=0;38;5;186:*.cs=0;38;5;48:*.el=0;38;5;48:*.rm=0;38;5;208:*.hs=0;38;5;48:*.td=0;38;5;48:*.ui=0;38;5;149:*.ex=0;38;5;48:*.js=0;38;5;48:*.cp=0;38;5;48:*.cr=0;38;5;48:*.la=0;38;5;243:*.kt=0;38;5;48:*.ml=0;38;5;48:*.vb=0;38;5;48:*.gv=0;38;5;48:*.lo=0;38;5;243:*.hi=0;38;5;243:*.ts=0;38;5;48:*.ko=1;38;5;203:*.hh=0;38;5;48:*.pp=0;38;5;48:*.di=0;38;5;48:*.bz=4;38;5;203:*.fs=0;38;5;48:*.png=0;38;5;208:*.zsh=0;38;5;48:*.mpg=0;38;5;208:*.pid=0;38;5;243:*.xmp=0;38;5;149:*.iso=4;38;5;203:*.m4v=0;38;5;208:*.dot=0;38;5;48:*.ods=0;38;5;186:*.inc=0;38;5;48:*.sxw=0;38;5;186:*.aif=0;38;5;208:*.git=0;38;5;243:*.gvy=0;38;5;48:*.tbz=4;38;5;203:*.log=0;38;5;243:*.txt=0;38;5;185:*.ico=0;38;5;208:*.csx=0;38;5;48:*.vob=0;38;5;208:*.pgm=0;38;5;208:*.pps=0;38;5;186:*.ics=0;38;5;186:*.img=4;38;5;203:*.fon=0;38;5;208:*.hpp=0;38;5;48:*.bsh=0;38;5;48:*.sql=0;38;5;48:*TODO=1:*.php=0;38;5;48:*.pkg=4;38;5;203:*.ps1=0;38;5;48:*.csv=0;38;5;185:*.ilg=0;38;5;243:*.ini=0;38;5;149:*.pyc=0;38;5;243:*.psd=0;38;5;208:*.htc=0;38;5;48:*.swp=0;38;5;243:*.mli=0;38;5;48:*hgrc=0;38;5;149:*.bst=0;38;5;149:*.ipp=0;38;5;48:*.fsi=0;38;5;48:*.tcl=0;38;5;48:*.exs=0;38;5;48:*.out=0;38;5;243:*.jar=4;38;5;203:*.xls=0;38;5;186:*.ppm=0;38;5;208:*.apk=4;38;5;203:*.aux=0;38;5;243:*.rpm=4;38;5;203:*.dll=1;38;5;203:*.eps=0;38;5;208:*.exe=1;38;5;203:*.doc=0;38;5;186:*.wma=0;38;5;208:*.deb=4;38;5;203:*.pod=0;38;5;48:*.ind=0;38;5;243:*.nix=0;38;5;149:*.lua=0;38;5;48:*.epp=0;38;5;48:*.dpr=0;38;5;48:*.htm=0;38;5;185:*.ogg=0;38;5;208:*.bin=4;38;5;203:*.otf=0;38;5;208:*.yml=0;38;5;149:*.pro=0;38;5;149:*.cxx=0;38;5;48:*.tex=0;38;5;48:*.fnt=0;38;5;208:*.erl=0;38;5;48:*.sty=0;38;5;243:*.bag=4;38;5;203:*.rst=0;38;5;185:*.pdf=0;38;5;186:*.pbm=0;38;5;208:*.xcf=0;38;5;208:*.clj=0;38;5;48:*.gif=0;38;5;208:*.rar=4;38;5;203:*.elm=0;38;5;48:*.bib=0;38;5;149:*.tsx=0;38;5;48:*.dmg=4;38;5;203:*.tmp=0;38;5;243:*.bcf=0;38;5;243:*.mkv=0;38;5;208:*.svg=0;38;5;208:*.cpp=0;38;5;48:*.vim=0;38;5;48:*.bmp=0;38;5;208:*.ltx=0;38;5;48:*.fls=0;38;5;243:*.flv=0;38;5;208:*.wav=0;38;5;208:*.m4a=0;38;5;208:*.mid=0;38;5;208:*.hxx=0;38;5;48:*.pas=0;38;5;48:*.wmv=0;38;5;208:*.tif=0;38;5;208:*.kex=0;38;5;186:*.mp4=0;38;5;208:*.bak=0;38;5;243:*.xlr=0;38;5;186:*.dox=0;38;5;149:*.swf=0;38;5;208:*.tar=4;38;5;203:*.tgz=4;38;5;203:*.cfg=0;38;5;149:*.xml=0;\n38;5;185:*.jpg=0;38;5;208:*.mir=0;38;5;48:*.sxi=0;38;5;186:*.bz2=4;38;5;203:*.odt=0;38;5;186:*.mov=0;38;5;208:*.toc=0;38;5;243:*.bat=1;38;5;203:*.asa=0;38;5;48:*.awk=0;38;5;48:*.sbt=0;38;5;48:*.vcd=4;38;5;203:*.kts=0;38;5;48:*.arj=4;38;5;203:*.blg=0;38;5;243:*.c++=0;38;5;48:*.odp=0;38;5;186:*.bbl=0;38;5;243:*.idx=0;38;5;243:*.com=1;38;5;203:*.mp3=0;38;5;208:*.avi=0;38;5;208:*.def=0;38;5;48:*.cgi=0;38;5;48:*.zip=4;38;5;203:*.ttf=0;38;5;208:*.ppt=0;38;5;186:*.tml=0;38;5;149:*.fsx=0;38;5;48:*.h++=0;38;5;48:*.rtf=0;38;5;186:*.inl=0;38;5;48:*.yaml=0;38;5;149:*.html=0;38;5;185:*.mpeg=0;38;5;208:*.java=0;38;5;48:*.hgrc=0;38;5;149:*.orig=0;38;5;243:*.conf=0;38;5;149:*.dart=0;38;5;48:*.psm1=0;38;5;48:*.rlib=0;38;5;243:*.fish=0;38;5;48:*.bash=0;38;5;48:*.make=0;38;5;149:*.docx=0;38;5;186:*.json=0;38;5;149:*.psd1=0;38;5;48:*.lisp=0;38;5;48:*.tbz2=4;38;5;203:*.diff=0;38;5;48:*.epub=0;38;5;186:*.xlsx=0;38;5;186:*.pptx=0;38;5;186:*.toml=0;38;5;149:*.h264=0;38;5;208:*.purs=0;38;5;48:*.flac=0;38;5;208:*.tiff=0;38;5;208:*.jpeg=0;38;5;208:*.lock=0;38;5;243:*.less=0;38;5;48:*.dyn_o=0;38;5;243:*.scala=0;38;5;48:*.mdown=0;38;5;185:*.shtml=0;38;5;185:*.class=0;38;5;243:*.cache=0;38;5;243:*.cmake=0;38;5;149:*passwd=0;38;5;149:*.swift=0;38;5;48:*shadow=0;38;5;149:*.xhtml=0;38;5;185:*.patch=0;38;5;48:*.cabal=0;38;5;48:*README=0;38;5;16;48;5;186:*.toast=4;38;5;203:*.ipynb=0;38;5;48:*COPYING=0;38;5;249:*.gradle=0;38;5;48:*.matlab=0;38;5;48:*.config=0;38;5;149:*LICENSE=0;38;5;249:*.dyn_hi=0;38;5;243:*.flake8=0;38;5;149:*.groovy=0;38;5;48:*INSTALL=0;38;5;16;48;5;186:*TODO.md=1:*.ignore=0;38;5;149:*Doxyfile=0;38;5;149:*TODO.txt=1:*setup.py=0;38;5;149:*Makefile=0;38;5;149:*.gemspec=0;38;5;149:*.desktop=0;38;5;149:*.rgignore=0;38;5;149:*.markdown=0;38;5;185:*COPYRIGHT=0;38;5;249:*configure=0;38;5;149:*.DS_Store=0;38;5;243:*.kdevelop=0;38;5;149:*.fdignore=0;38;5;149:*README.md=0;38;5;16;48;5;186:*.cmake.in=0;38;5;149:*SConscript=0;38;5;149:*CODEOWNERS=0;38;5;149:*.localized=0;38;5;243:*.gitignore=0;38;5;149:*Dockerfile=0;38;5;149:*.gitconfig=0;38;5;149:*INSTALL.md=0;38;5;16;48;5;186:*README.txt=0;38;5;16;48;5;186:*SConstruct=0;38;5;149:*.scons_opt=0;38;5;243:*.travis.yml=0;38;5;186:*.gitmodules=0;38;5;149:*.synctex.gz=0;38;5;243:*LICENSE-MIT=0;38;5;249:*MANIFEST.in=0;38;5;149:*Makefile.in=0;38;5;243:*Makefile.am=0;38;5;149:*INSTALL.txt=0;38;5;16;48;5;186:*configure.ac=0;38;5;149:*.applescript=0;38;5;48:*appveyor.yml=0;38;5;186:*.fdb_latexmk=0;38;5;243:*CONTRIBUTORS=0;38;5;16;48;5;186:*.clang-format=0;38;5;149:*LICENSE-APACHE=0;38;5;249:*CMakeLists.txt=0;38;5;149:*CMakeCache.txt=0;38;5;243:*.gitattributes=0;38;5;149:*CONTRIBUTORS.md=0;38;5;16;48;5;186:*.sconsign.dblite=0;38;5;243:*requirements.txt=0;38;5;149:*CONTRIBUTORS.txt=0;38;5;16;48;5;186:*package-lock.json=0;38;5;243:*.CFUserTextEncoding=0;38;5;243\n");
                            },
                            Some(_) => {
                                memcpy(&v62 as u8, &v50, 160);
                            },
                        }
                        v77 = 1;
                        v74 = memcpy(&v67, &v58, 160) as u64 as u32 & -0x100 | 1;
                        v75 = a1[502] as i8 as u8 as u32;
                        if v75 != 2 {
                            goto LABEL_5faee1;
                        }
                        goto LABEL_5faf3e;
                    }
                }
            } else if v73 == 1 {
                goto LABEL_5fae97;
            }
            v67 = 0x8000000000000000;
            v74 = 0;
            v75 = a1[502] as i8 as u8 as u32;
            if v75 != 2 {
LABEL_5faee1:
                v13 = v75;
                if v75 != 1 {
                    v13 = v74;
                }
            }
LABEL_5faf3e:
            v97 = fd::extract_command(a1, v77);
            v78 = v97 as i64;
            if v78 == 9223372036854775809 {
                return struct16 {
                    field_0: 2
                    field_8: v52
                };
            }
            v23 = v69;
            v42 = *((&v97 as &char + 16) as &i128) as u128;
            v2 = (v78 != 0x8000000000000000) as u8 as u8;
            v79 = (!a1[505] as i8) as u8 as u8;
            v40 = v78;
            v22 = (a1[480] as i8 ? 0 : v79 as u32);
            v41 = v52;
            v80 = a1[481] as i8;
            v21 = v81;
            v20 = (!(v79 & (v80 ^ 1)) ? 0 : (a1[482] as i8 ^ 1) as u8 as u32);
            v19 = (!(v79 & (v80 ^ 1)) ? 0 : (a1[485] as i8 ^ 1) as u8 as u32);
            v82 = a1[32] as i64;
            v83 = a1[40] as i64;
            v84 = v83;
            v85 = v82;
            if *(a1 as &i8) {
                v84 = a1[8] as i64;
                v85 = 1;
            }
            v88 = v84;
            v36 = v85;
            v37 = v82;
            v38 = v83;
            v0 = a1[483] as i8;
            v6 = a1[484] as i8;
            v5 = a1[494] as i8;
            v10 = a1[493] as i8;
            v9 = a1[500] as i8;
            v8 = a1[495] as i8;
            v11 = a1[498] as i8;
            v7 = a1[496] as i8;
            v35 = fd::cli::Opts::threads(a1[472] as i64);
            v34 = a1[448] as i64;
            v18 = a1[456] as i32;
            memcpy(&v97, &v67, 160);
            if a1[232] as i64 == 0x8000000000000000 {
                v3 = 2;
                if a1[0x100] as i64 != 0x8000000000000000 {
                    goto LABEL_5fb14c;
                }
            } else {
                v59 = fd::construct_config::{{closure}}(a1[240] as i64, a1[248] as i64);
                v3 = v59.field_0;
                v30 = *(&v59.field_1 as &i64);
                if a1[0x100] as i64 != 0x8000000000000000 {
LABEL_5fb14c:
                    v61 as u768 = fd::construct_config::{{closure}}(a1[264] as i64, a1[272] as i64);
                    v89 = v60 as i64;
                    v90 = v65;
                    v91 = *((&v60 as &char + 24) as &i64);
                    if !v89 {
                        v61 = v64;
                        v64 = v90;
                        v65 = v91;
                        return struct16 {
                            field_0: 2
                            field_8: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v61 as u768)
                        };
                    }
                }
            }
            v46 = v89;
            v47 = v64;
            v48 = v90;
            v49 = v91;
            if a1[328] as i64 == 0x8000000000000000 {
                v54 = 2;
                if v78 != 0x8000000000000000 {
                    goto LABEL_5fb2ac;
                }
            } else {
                fd::fmt::FormatTemplate::parse(&v58, a1[336] as i64, a1[344] as i64);
                v56 = v58.field_16;
                v55 = v58.field_0;
                if v78 != 0x8000000000000000 {
LABEL_5fb2ac:
                    v63 = struct48 {
                        field_0: 1
                        field_8: 1
                        field_16: v78
                        field_24: *(&v41 as &i128)
                        field_40: v43
                    };
                    v92 = alloc::boxed::Box<T>::new(&v63) as u64;
                }
            }
            v31 = v92;
            v33 = v88;
            v17 = v76;
            v44 = v92;
            v32 = a1[464] as i64;
            core::iter::traits::iterator::Iterator::collect(&v58, a1[72] as i64, a1[72] as i64 + a1[80] as i64 * 24);
            *((a0 + 120) as &i64) = a1[128] as i64;
            *((a0 + 104) as &i128) = a1[112] as i128;
            *(&a1[112] as &i64) = 0;
            *(&a1[120] as &i64) = 8;
            *(&a1[128] as &i64) = 0;
            *((a0 + 384) as &Result<(), Error>) = v57;
            v1 = a1[499] as i8;
            *((a0 + 360) as &i128) = v27 as i128;
            *((a0 + 376) as &i64) = *((&v27 as &char + 16) as &i64);
            *((a0 + 192) as &u64) = v26;
            *((a0 + 176) as &u128) = v24;
            v93 = fd::cli::Opts::max_results(a1);
            v2 = fd::cli::Opts::strip_cwd_prefix(a1, a1[495] as i8 as u8 as u32, v2 as u32) as u8;
            memcpy(a0 + 200, &v97, 160);
            v94 = *(&v46.field_0 as &i128);
            return struct496 {
                field_0: v36
                field_8: v33
                field_16: v37
                field_24: v38
                field_32: v93
                field_40: v95
                field_48: v55
                field_64: v56
                field_80: v58.field_0
                field_96: v65
                padding_104: <UNKNOWN>
                field_128: <UNKNOWN>
                padding_120: <UNKNOWN>
                field_136: v14
                padding_136: v12
                field_144: v17
                field_152: v16
                field_160: v15
                field_168: v39
                padding_176: <UNKNOWN>
                field_400: <UNKNOWN>
                padding_216: <UNKNOWN>
                field_408: <UNKNOWN>
                padding_248: <UNKNOWN>
                field_416: <UNKNOWN>
                padding_280: <UNKNOWN>
                field_424: <UNKNOWN>
                padding_320: <UNKNOWN>
                field_440: <UNKNOWN>
                padding_352: <UNKNOWN>
                field_456: <UNKNOWN>
                padding_376: <UNKNOWN>
                field_464: <UNKNOWN>
                padding_400: v34
                field_472: <UNKNOWN>
                padding_416: <UNKNOWN>
                field_473: <UNKNOWN>
                padding_424: <UNKNOWN>
                field_474: <UNKNOWN>
                padding_440: <UNKNOWN>
                field_475: *(&v48 as &i128)
                padding_448: <UNKNOWN>
                field_476: <UNKNOWN>
                field_477: <UNKNOWN>
                field_478: <UNKNOWN>
                field_479: <UNKNOWN>
                field_480: <UNKNOWN>
                padding_456: <UNKNOWN>
                field_481: v31
                padding_464: <UNKNOWN>
                field_482: <UNKNOWN>
                field_483: <UNKNOWN>
                field_484: <UNKNOWN>
                field_485: <UNKNOWN>
                field_486: v32
                padding_472: <UNKNOWN>
                field_487: <UNKNOWN>
                field_488: <UNKNOWN>
                field_489: <UNKNOWN>
                field_490: v23 as u8
                padding_480: v10
                field_498: v11
                padding_488: v13 as u8
                field_502: v30
            };
        },
    }
}
