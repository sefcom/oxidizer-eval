
  fn uu_ptx::uu_app::h1c00958dd96a6a6b(arg1: i64) -> i64

{
    let mut var_840: *const i8;
    clap_builder::builder::command::Command::new::h0b0ca41b37566755(&var_840, 
        uucore::util_name::h074417a1e6395129());
    let mut var_578: ();
    clap_builder::builder::command::Command::about::h992feb62b52d14dc(&var_578, &var_840);
    clap_builder::builder::command::Command::version::hd8103f1ab6a16971(&var_840, &var_578);
    let mut var_ac0: ();
    uucore::format_usage::he053403a896311ed(&var_ac0, "{} [OPTION]... [INPUT]...\n{} -G…", 0x3c);
    clap_builder::builder::command::Command::override_usage::h90d6116fa033c2da(&var_578, &var_840, 
        &var_ac0);
    memcpy(&var_840, &var_578, 0x2bc);
    let var_2bc: i64;
    let var_584: i64 = 0x8000000080 | var_2bc;
    let var_2b4: i32;
    let var_57c: i32 = var_2b4;
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_578, "filemode{");
    memcpy(&var_ac0, &var_578, 0x278);
    clap_builder::builder::arg::Arg::action::ha7a1f2fba74b0519(&var_578, &var_ac0, 1);
    clap_builder::builder::arg::Arg::value_hint::h4857b537972d8a9d(&var_ac0, &var_578);
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_840, 
        "auto-referencetraditionalflag-tr…");
    clap_builder::builder::arg::Arg::short::h6a4ee9ce5f0b5f0c(&var_ac0, &var_840, 0x41);
    clap_builder::builder::arg::Arg::long::hda8111f7dae90d37(&var_840, &var_ac0, 
        "auto-referencetraditionalflag-tr…");
    clap_builder::builder::arg::Arg::help::h4da5c5f29ad265e1(&var_ac0, &var_840, 
        "output automatically generated r…", 0x29);
    let mut var_2b0: *const i8;
    clap_builder::builder::arg::Arg::action::ha7a1f2fba74b0519(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_578, 
        "traditionalflag-truncationmacro-…");
    clap_builder::builder::arg::Arg::short::h6a4ee9ce5f0b5f0c(&var_ac0, &var_578, 0x47);
    clap_builder::builder::arg::Arg::long::hda8111f7dae90d37(&var_578, &var_ac0, 
        "traditionalflag-truncationmacro-…");
    clap_builder::builder::arg::Arg::help::h4da5c5f29ad265e1(&var_ac0, &var_578, 
        "behave more like System V 'ptx'u…", 0x1f);
    clap_builder::builder::arg::Arg::action::ha7a1f2fba74b0519(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_840, 
        "flag-truncationmacro-nameformatr…");
    clap_builder::builder::arg::Arg::short::h6a4ee9ce5f0b5f0c(&var_ac0, &var_840, 0x46);
    clap_builder::builder::arg::Arg::long::hda8111f7dae90d37(&var_840, &var_ac0, 
        "flag-truncationmacro-nameformatr…");
    clap_builder::builder::arg::Arg::help::h4da5c5f29ad265e1(&var_ac0, &var_840, 
        "use STRING for flagging line tru…", 0x28);
    clap_builder::builder::arg::Arg::value_name::h9190502240af5d2a(&var_2b0, &var_ac0, 
        "STRINGmacro name to use instead …");
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_578, 
        "macro-nameformatright-side-refss…");
    clap_builder::builder::arg::Arg::short::h6a4ee9ce5f0b5f0c(&var_ac0, &var_578, 0x4d);
    clap_builder::builder::arg::Arg::long::hda8111f7dae90d37(&var_578, &var_ac0, 
        "macro-nameformatright-side-refss…");
    clap_builder::builder::arg::Arg::help::h4da5c5f29ad265e1(&var_ac0, &var_578, 
        "macro name to use instead of 'xx…", 0x21);
    clap_builder::builder::arg::Arg::value_name::h9190502240af5d2a(&var_2b0, &var_ac0, 
        "STRINGmacro name to use instead …");
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_840, 
        "formatright-side-refssentence-re…");
    clap_builder::builder::arg::Arg::long::hda8111f7dae90d37(&var_ac0, &var_840, 
        "formatright-side-refssentence-re…");
    memcpy(&var_840, &var_ac0, 0x278);
    let var_300: i32;
    let var_5c8: i32 = var_300 | 4 | 4;
    let var_2fc: i32;
    let var_5c4: i32 = var_2fc;
    var_2b0 = "roffHashj";
    let var_2a8: i64 = 4;
    let var_2a0: *const i8 = "texinternal error: entered unrea…";
    let var_298: i64 = 3;
    clap_builder::builder::arg::Arg::value_parser::hb60218a23cee4bc2(&var_ac0, &var_840, &var_2b0);
    var_840 = "formatright-side-refssentence-re…";
    let var_838: i64 = 6;
    let var_830: *const i8 = "roffHashj";
    let var_828: i64 = 4;
    let var_820: *const i8 = "texinternal error: entered unrea…";
    let var_818: i64 = 3;
    clap_builder::builder::arg::Arg::overrides_with_all::h81fc6be3388c4155(&var_2b0, &var_ac0, 
        &var_840);
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_578, "roffHashj");
    clap_builder::builder::arg::Arg::short::h6a4ee9ce5f0b5f0c(&var_ac0, &var_578, 0x4f);
    clap_builder::builder::arg::Arg::help::h4da5c5f29ad265e1(&var_578, &var_ac0, 
        "generate output as roff directiv…", 0x22);
    var_2b0 = "formatright-side-refssentence-re…";
    let var_2a8_1: i64 = 6;
    let var_2a0_1: *const i8 = "roffHashj";
    let var_298_1: i64 = 4;
    let var_290: *const i8 = "texinternal error: entered unrea…";
    let var_288: i64 = 3;
    clap_builder::builder::arg::Arg::overrides_with_all::h81fc6be3388c4155(&var_ac0, &var_578, 
        &var_2b0);
    clap_builder::builder::arg::Arg::action::ha7a1f2fba74b0519(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_840, 
        "texinternal error: entered unrea…");
    clap_builder::builder::arg::Arg::short::h6a4ee9ce5f0b5f0c(&var_ac0, &var_840, 0x54);
    clap_builder::builder::arg::Arg::help::h4da5c5f29ad265e1(&var_840, &var_ac0, 
        "generate output as TeX directive…", 0x21);
    var_2b0 = "formatright-side-refssentence-re…";
    let var_2a8_2: i64 = 6;
    let var_2a0_2: *const i8 = "roffHashj";
    let var_298_2: i64 = 4;
    let var_290_1: *const i8 = "texinternal error: entered unrea…";
    let var_288_1: i64 = 3;
    clap_builder::builder::arg::Arg::overrides_with_all::h81fc6be3388c4155(&var_ac0, &var_840, 
        &var_2b0);
    clap_builder::builder::arg::Arg::action::ha7a1f2fba74b0519(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_578, 
        "right-side-refssentence-regexpwo…");
    clap_builder::builder::arg::Arg::short::h6a4ee9ce5f0b5f0c(&var_ac0, &var_578, 0x52);
    clap_builder::builder::arg::Arg::long::hda8111f7dae90d37(&var_578, &var_ac0, 
        "right-side-refssentence-regexpwo…");
    clap_builder::builder::arg::Arg::help::h4da5c5f29ad265e1(&var_ac0, &var_578, 
        "put references at right, not cou…", 0x2a);
    clap_builder::builder::arg::Arg::action::ha7a1f2fba74b0519(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_840, 
        "sentence-regexpword-regexpbreak-…");
    clap_builder::builder::arg::Arg::short::h6a4ee9ce5f0b5f0c(&var_ac0, &var_840, 0x53);
    clap_builder::builder::arg::Arg::long::hda8111f7dae90d37(&var_840, &var_ac0, 
        "sentence-regexpword-regexpbreak-…");
    clap_builder::builder::arg::Arg::help::h4da5c5f29ad265e1(&var_ac0, &var_840, 
        "for end of lines or end of sente…", 0x24);
    clap_builder::builder::arg::Arg::value_name::h9190502240af5d2a(&var_2b0, &var_ac0, 
        "REGEXPword break characters in t…");
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_578, 
        "word-regexpbreak-fileignore-case…");
    clap_builder::builder::arg::Arg::short::h6a4ee9ce5f0b5f0c(&var_ac0, &var_578, 0x57);
    clap_builder::builder::arg::Arg::long::hda8111f7dae90d37(&var_578, &var_ac0, 
        "word-regexpbreak-fileignore-case…");
    clap_builder::builder::arg::Arg::help::h4da5c5f29ad265e1(&var_ac0, &var_578, 
        "use REGEXP to match each keyword", 0x20);
    clap_builder::builder::arg::Arg::value_name::h9190502240af5d2a(&var_2b0, &var_ac0, 
        "REGEXPword break characters in t…");
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_840, 
        "break-fileignore-caseignore-file…");
    clap_builder::builder::arg::Arg::short::h6a4ee9ce5f0b5f0c(&var_ac0, &var_840, 0x62);
    clap_builder::builder::arg::Arg::long::hda8111f7dae90d37(&var_840, &var_ac0, 
        "break-fileignore-caseignore-file…");
    clap_builder::builder::arg::Arg::help::h4da5c5f29ad265e1(&var_ac0, &var_840, 
        "word break characters in this FI…", 0x22);
    clap_builder::builder::arg::Arg::value_name::h9190502240af5d2a(&var_840, &var_ac0, "FI");
    clap_builder::builder::arg::Arg::value_hint::h4857b537972d8a9d(&var_ac0, &var_840);
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_578, 
        "ignore-caseignore-fileonly-filer…");
    clap_builder::builder::arg::Arg::short::h6a4ee9ce5f0b5f0c(&var_ac0, &var_578, 0x66);
    clap_builder::builder::arg::Arg::long::hda8111f7dae90d37(&var_578, &var_ac0, 
        "ignore-caseignore-fileonly-filer…");
    clap_builder::builder::arg::Arg::help::h4da5c5f29ad265e1(&var_ac0, &var_578, 
        "fold lower case to upper case fo…", 0x29);
    clap_builder::builder::arg::Arg::action::ha7a1f2fba74b0519(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_840, "gap-siz");
    clap_builder::builder::arg::Arg::short::h6a4ee9ce5f0b5f0c(&var_ac0, &var_840, 0x67);
    clap_builder::builder::arg::Arg::long::hda8111f7dae90d37(&var_840, &var_ac0, "gap-siz");
    clap_builder::builder::arg::Arg::help::h4da5c5f29ad265e1(&var_ac0, &var_840, 
        "gap size in columns between outp…", 0x29);
    clap_builder::builder::arg::Arg::value_name::h9190502240af5d2a(&var_2b0, &var_ac0, 
        "NUMBERread ignore word list from…");
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_578, 
        "ignore-fileonly-filereferenceswi…");
    clap_builder::builder::arg::Arg::short::h6a4ee9ce5f0b5f0c(&var_ac0, &var_578, 0x69);
    clap_builder::builder::arg::Arg::long::hda8111f7dae90d37(&var_578, &var_ac0, 
        "ignore-fileonly-filereferenceswi…");
    clap_builder::builder::arg::Arg::help::h4da5c5f29ad265e1(&var_ac0, &var_578, 
        "read ignore word list from FILEr…", 0x1f);
    clap_builder::builder::arg::Arg::value_name::h9190502240af5d2a(&var_578, &var_ac0, "FI");
    clap_builder::builder::arg::Arg::value_hint::h4857b537972d8a9d(&var_ac0, &var_578);
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_840, 
        "only-filereferenceswidthProduce …");
    clap_builder::builder::arg::Arg::short::h6a4ee9ce5f0b5f0c(&var_ac0, &var_840, 0x6f);
    clap_builder::builder::arg::Arg::long::hda8111f7dae90d37(&var_840, &var_ac0, 
        "only-filereferenceswidthProduce …");
    clap_builder::builder::arg::Arg::help::h4da5c5f29ad265e1(&var_ac0, &var_840, 
        "read only word list from this FI…", 0x22);
    clap_builder::builder::arg::Arg::value_name::h9190502240af5d2a(&var_840, &var_ac0, "FI");
    clap_builder::builder::arg::Arg::value_hint::h4857b537972d8a9d(&var_ac0, &var_840);
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_578, 
        "referenceswidthProduce a permute…");
    clap_builder::builder::arg::Arg::short::h6a4ee9ce5f0b5f0c(&var_ac0, &var_578, 0x72);
    clap_builder::builder::arg::Arg::long::hda8111f7dae90d37(&var_578, &var_ac0, 
        "referenceswidthProduce a permute…");
    clap_builder::builder::arg::Arg::help::h4da5c5f29ad265e1(&var_ac0, &var_578, 
        "first field of each line is a re…", 0x27);
    clap_builder::builder::arg::Arg::value_name::h9190502240af5d2a(&var_578, &var_ac0, "FI");
    clap_builder::builder::arg::Arg::action::ha7a1f2fba74b0519(&var_ac0, &var_578, 2);
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::h631b298e702b52bc(&var_840, 
        "widthProduce a permuted index of…");
    clap_builder::builder::arg::Arg::short::h6a4ee9ce5f0b5f0c(&var_ac0, &var_840, 0x77);
    clap_builder::builder::arg::Arg::long::hda8111f7dae90d37(&var_840, &var_ac0, 
        "widthProduce a permuted index of…");
    clap_builder::builder::arg::Arg::help::h4da5c5f29ad265e1(&var_ac0, &var_840, 
        "output width in columns, referen…", 0x2b);
    clap_builder::builder::arg::Arg::value_name::h9190502240af5d2a(&var_840, &var_ac0, 
        "NUMBERread ignore word list from…");
    clap_builder::builder::command::Command::arg::hf94cdbd5ea9194a4(arg1, &var_578, &var_840);
    arg1
}
