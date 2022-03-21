/*
    Copyright (c) 2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/nemu-cpp/mustache-templating-engine/blob/main/LICENSE.txt
*/

#include "MustacheTemplateEngineTests.hpp"
#include "Nemu/MustacheTemplateEngine/MustacheTemplatingEngine.hpp"

using namespace Ishiko;
using namespace Nemu;

MustacheTemplatingEngineTests::MustacheTemplatingEngineTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "MustacheTemplatingEngine tests", context)
{
    append<HeapAllocationErrorsTest>("Creation test 1", ConstructorTest1);
}

void MustacheTemplatingEngineTests::ConstructorTest1(Test& test)
{
    MustacheTemplatingEngine templatingEngine;

    ISHIKO_TEST_PASS();
}
