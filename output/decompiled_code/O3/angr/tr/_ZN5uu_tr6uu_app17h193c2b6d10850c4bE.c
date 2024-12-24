long long uu_tr::uu_app::h193c2b6d10850c4b(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x7f8]
    char v2;  // [bp-0x53c]
    char v3;  // [bp-0x534]
    char v4;  // [bp-0x530]
    unsigned long long v5;  // [sp-0x274]
    unsigned int v6;  // [sp-0x26c]
    char v7;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v9;  // rdx

    clap_builder::builder::command::Command::new::ha86f798e75899fcc(&v4, uucore::util_name::h412db5e565a079f3(), v9);
    clap_builder::builder::command::Command::version::ha4a2cd7a32be50db(&v1, &v4, v9);
    clap_builder::builder::command::Command::about::haadc731b943b7a86(&v4, &v1);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTION]... SET1 [SET2]", 26);
    clap_builder::builder::command::Command::override_usage::hdba5d2f8375f63cb(&v1, &v4, &v0);
    memcpy(&v4, &v1, 700);
    v5 = 549755814048 | *((long long *)&v2);
    v6 = *((int *)&v3);
    clap_builder::builder::arg::Arg::new::hd6e2b12e0c70fd5c(&v1, "complement", 10);
    clap_builder::builder::arg::Arg::visible_short_alias::h192e212b518e770c(&v0, &v1, 67);
    clap_builder::builder::arg::Arg::short::h9cb1ff6da5416261(&v1, &v0, 99);
    clap_builder::builder::arg::Arg::long::h3dde73978fc2b019(&v0, &v1, "complement", 10);
    clap_builder::builder::arg::Arg::help::h363be04da7d1df3a(&v1, &v0, "use the complement of SET1", 26);
    clap_builder::builder::arg::Arg::action::h7bf438d4b75b1ea9(&v0, &v1);
    clap_builder::builder::arg::Arg::overrides_with::h089fe41cca253798(&v7, &v0, "complement", 10);
    clap_builder::builder::command::Command::arg::hd566e0316e05b05e(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new::hd6e2b12e0c70fd5c(&v4, "delete", 6);
    clap_builder::builder::arg::Arg::short::h9cb1ff6da5416261(&v0, &v4, 100);
    clap_builder::builder::arg::Arg::long::h3dde73978fc2b019(&v4, &v0, "delete", 6);
    clap_builder::builder::arg::Arg::help::h363be04da7d1df3a(&v0, &v4, "delete characters in SET1, do not translate", 43);
    clap_builder::builder::arg::Arg::action::h7bf438d4b75b1ea9(&v4, &v0);
    clap_builder::builder::arg::Arg::overrides_with::h089fe41cca253798(&v0, &v4, "delete", 6);
    clap_builder::builder::command::Command::arg::hd566e0316e05b05e(&v4, &v1, &v0);
    clap_builder::builder::arg::Arg::new::hd6e2b12e0c70fd5c(&v1, "squeeze-repeats", 15);
    clap_builder::builder::arg::Arg::long::h3dde73978fc2b019(&v0, &v1, "squeeze-repeats", 15);
    clap_builder::builder::arg::Arg::short::h9cb1ff6da5416261(&v1, &v0, 115);
    clap_builder::builder::arg::Arg::help::h363be04da7d1df3a(&v0, &v1, "replace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that character", 130);
    clap_builder::builder::arg::Arg::action::h7bf438d4b75b1ea9(&v1, &v0);
    clap_builder::builder::arg::Arg::overrides_with::h089fe41cca253798(&v0, &v1, "squeeze-repeats", 15);
    clap_builder::builder::command::Command::arg::hd566e0316e05b05e(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new::hd6e2b12e0c70fd5c(&v4, "truncate-set1", 13);
    clap_builder::builder::arg::Arg::long::h3dde73978fc2b019(&v0, &v4, "truncate-set1", 13);
    clap_builder::builder::arg::Arg::short::h9cb1ff6da5416261(&v4, &v0, 116);
    clap_builder::builder::arg::Arg::help::h363be04da7d1df3a(&v0, &v4, "first truncate SET1 to length of SET2/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/iter/traits/exact_size.rsTagMapResMapOptAltIsNotIsASeparatedListSeparatedNonEmptyListMany0Many1CountTakeUntilLengthValueTagClosureAlphaDigitAlphaNumericSpaceMultiSpaceLengthValueFnEofSwitchTagBitsOneOfNoneOfRegexpMatchRegexpMatchesRegexpFindRegexpCaptureRegexpCapturesTakeWhile1FixEscapedManyMNNotPermutationVerifyTakeTill1TakeWhileMNMany0CountMany1CountFloatSatisfy", 37);
    clap_builder::builder::arg::Arg::action::h7bf438d4b75b1ea9(&v4, &v0);
    clap_builder::builder::arg::Arg::overrides_with::h089fe41cca253798(&v0, &v4, "truncate-set1", 13);
    clap_builder::builder::command::Command::arg::hd566e0316e05b05e(&v4, &v1, &v0);
    clap_builder::builder::arg::Arg::new::hd6e2b12e0c70fd5c(&v1, "sets", 4);
    clap_builder::builder::arg::Arg::num_args::h9fed32a781db4f01(&v0, &v1);
    v7 = 2;
    clap_builder::builder::arg::Arg::value_parser::h8522b979c232ae68(&v1, &v0, &v7);
    clap_builder::builder::command::Command::arg::hd566e0316e05b05e(a0, &v4, &v1);
    return a0;
}
