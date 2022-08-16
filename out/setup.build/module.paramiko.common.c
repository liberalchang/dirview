/* Generated code for Python module 'paramiko.common'
 * created by Nuitka version 1.0rc3
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_paramiko$common" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_paramiko$common;
PyDictObject *moduledict_paramiko$common;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[226];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[226];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("paramiko.common"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 226; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_paramiko$common(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 226; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_3092ec18cf45118548cfab3728b70bef;
static PyCodeObject *codeobj_a69f15d4c61969122006c679593c8842;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[222]); CHECK_OBJECT(module_filename_obj);
    codeobj_3092ec18cf45118548cfab3728b70bef = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[223], NULL, NULL, 0, 0, 0);
    codeobj_a69f15d4c61969122006c679593c8842 = MAKE_CODEOBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[224], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_paramiko$common$$$function__1_asbytes();


// The module function definitions.
static PyObject *impl_paramiko$common$$$function__1_asbytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    struct Nuitka_FrameObject *frame_a69f15d4c61969122006c679593c8842;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_a69f15d4c61969122006c679593c8842 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a69f15d4c61969122006c679593c8842)) {
        Py_XDECREF(cache_frame_a69f15d4c61969122006c679593c8842);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a69f15d4c61969122006c679593c8842 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a69f15d4c61969122006c679593c8842 = MAKE_FUNCTION_FRAME(codeobj_a69f15d4c61969122006c679593c8842, module_paramiko$common, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a69f15d4c61969122006c679593c8842->m_type_description == NULL);
    frame_a69f15d4c61969122006c679593c8842 = cache_frame_a69f15d4c61969122006c679593c8842;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a69f15d4c61969122006c679593c8842);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a69f15d4c61969122006c679593c8842) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_s);
        tmp_args_element_value_1 = par_s;
        frame_a69f15d4c61969122006c679593c8842->m_frame.f_lineno = 204;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_a69f15d4c61969122006c679593c8842, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_a69f15d4c61969122006c679593c8842, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_s);
        tmp_called_instance_1 = par_s;
        frame_a69f15d4c61969122006c679593c8842->m_frame.f_lineno = 209;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        goto try_return_handler_2;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_a69f15d4c61969122006c679593c8842, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_a69f15d4c61969122006c679593c8842, exception_keeper_lineno_2);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_2, exception_keeper_tb_2);
    PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(par_s);
    tmp_return_value = par_s;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_4;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 206;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a69f15d4c61969122006c679593c8842->m_frame) frame_a69f15d4c61969122006c679593c8842->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_4;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 200;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a69f15d4c61969122006c679593c8842->m_frame) frame_a69f15d4c61969122006c679593c8842->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a69f15d4c61969122006c679593c8842);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a69f15d4c61969122006c679593c8842);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a69f15d4c61969122006c679593c8842);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a69f15d4c61969122006c679593c8842, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a69f15d4c61969122006c679593c8842->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a69f15d4c61969122006c679593c8842, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a69f15d4c61969122006c679593c8842,
        type_description_1,
        par_s
    );


    // Release cached frame if used for exception.
    if (frame_a69f15d4c61969122006c679593c8842 == cache_frame_a69f15d4c61969122006c679593c8842) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a69f15d4c61969122006c679593c8842);
        cache_frame_a69f15d4c61969122006c679593c8842 = NULL;
    }

    assertFrameObject(frame_a69f15d4c61969122006c679593c8842);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_paramiko$common$$$function__1_asbytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$common$$$function__1_asbytes,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a69f15d4c61969122006c679593c8842,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_paramiko$common,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_paramiko$common[] = {
    impl_paramiko$common$$$function__1_asbytes,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_paramiko$common;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_paramiko$common) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_paramiko$common[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_paramiko$common,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_paramiko$common(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("paramiko.common");

    // Store the module for future use.
    module_paramiko$common = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("paramiko.common: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("paramiko.common: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("paramiko.common: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initparamiko$common\n");

    moduledict_paramiko$common = MODULE_DICT(module_paramiko$common);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_paramiko$common,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_paramiko$common,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[225]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_paramiko$common,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_paramiko$common,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_paramiko$common,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_paramiko$common);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_paramiko$common);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_tuple_unpack_10__element_1 = NULL;
    PyObject *tmp_tuple_unpack_10__element_2 = NULL;
    PyObject *tmp_tuple_unpack_10__element_3 = NULL;
    PyObject *tmp_tuple_unpack_10__element_4 = NULL;
    PyObject *tmp_tuple_unpack_10__element_5 = NULL;
    PyObject *tmp_tuple_unpack_10__source_iter = NULL;
    PyObject *tmp_tuple_unpack_11__element_1 = NULL;
    PyObject *tmp_tuple_unpack_11__element_2 = NULL;
    PyObject *tmp_tuple_unpack_11__element_3 = NULL;
    PyObject *tmp_tuple_unpack_11__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__element_4 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__element_3 = NULL;
    PyObject *tmp_tuple_unpack_6__element_4 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__element_3 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_10 = NULL;
    PyObject *tmp_tuple_unpack_8__element_11 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__element_3 = NULL;
    PyObject *tmp_tuple_unpack_8__element_4 = NULL;
    PyObject *tmp_tuple_unpack_8__element_5 = NULL;
    PyObject *tmp_tuple_unpack_8__element_6 = NULL;
    PyObject *tmp_tuple_unpack_8__element_7 = NULL;
    PyObject *tmp_tuple_unpack_8__element_8 = NULL;
    PyObject *tmp_tuple_unpack_8__element_9 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    PyObject *tmp_tuple_unpack_9__element_1 = NULL;
    PyObject *tmp_tuple_unpack_9__element_2 = NULL;
    PyObject *tmp_tuple_unpack_9__element_3 = NULL;
    PyObject *tmp_tuple_unpack_9__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3092ec18cf45118548cfab3728b70bef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    int tmp_res;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[3];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_3092ec18cf45118548cfab3728b70bef = MAKE_MODULE_FRAME(codeobj_3092ec18cf45118548cfab3728b70bef, module_paramiko$common);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_3092ec18cf45118548cfab3728b70bef);
    assert(Py_REFCNT(frame_3092ec18cf45118548cfab3728b70bef) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[8], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[10];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_paramiko$common;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[11];
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 22;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[12];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_paramiko$common;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[13];
        tmp_level_value_2 = mod_consts[11];
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 23;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_paramiko$common,
                mod_consts[14],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[14]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_paramiko$common,
                mod_consts[15],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[15]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_paramiko$common,
                mod_consts[16],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[16]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_paramiko$common,
                mod_consts[0],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[0]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_9);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[17];
        tmp_assign_source_10 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_10 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_1, 0, 7);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 25;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_2, 1, 7);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 25;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_3, 2, 7);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 25;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_4, 3, 7);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 25;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_5, 4, 7);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 25;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_5 == NULL);
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_6, 5, 7);
        if (tmp_assign_source_16 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 25;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_6 == NULL);
        tmp_tuple_unpack_1__element_6 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_7, 6, 7);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 25;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_7 == NULL);
        tmp_tuple_unpack_1__element_7 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 25;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[18];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 25;
            goto try_except_handler_3;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_18);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_19);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_3;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_20);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_4;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_21);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_5;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_22);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
        tmp_assign_source_23 = tmp_tuple_unpack_1__element_6;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_23);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_6);
    tmp_tuple_unpack_1__element_6 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
        tmp_assign_source_24 = tmp_tuple_unpack_1__element_7;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_24);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_7);
    tmp_tuple_unpack_1__element_7 = NULL;

    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = mod_consts[26];
        tmp_assign_source_25 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        assert(!(tmp_assign_source_25 == NULL));
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_25;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT(tmp_unpack_8, 0, 2);
        if (tmp_assign_source_26 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 34;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_27 = UNPACK_NEXT(tmp_unpack_9, 1, 2);
        if (tmp_assign_source_27 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 34;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_27;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 34;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[27];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 34;
            goto try_except_handler_5;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_28 = tmp_tuple_unpack_2__element_1;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_28);
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_29 = tmp_tuple_unpack_2__element_2;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_29);
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_iter_arg_3;
        tmp_iter_arg_3 = mod_consts[30];
        tmp_assign_source_30 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        assert(!(tmp_assign_source_30 == NULL));
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_30;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_31 = UNPACK_NEXT(tmp_unpack_10, 0, 4);
        if (tmp_assign_source_31 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 35;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_32 = UNPACK_NEXT(tmp_unpack_11, 1, 4);
        if (tmp_assign_source_32 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 35;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT(tmp_unpack_12, 2, 4);
        if (tmp_assign_source_33 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 35;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_3 == NULL);
        tmp_tuple_unpack_3__element_3 = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT(tmp_unpack_13, 3, 4);
        if (tmp_assign_source_34 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 35;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_4 == NULL);
        tmp_tuple_unpack_3__element_4 = tmp_assign_source_34;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 35;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[31];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 35;
            goto try_except_handler_7;
        }
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_4);
    tmp_tuple_unpack_3__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_35 = tmp_tuple_unpack_3__element_1;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_35);
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_36 = tmp_tuple_unpack_3__element_2;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_36);
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
        tmp_assign_source_37 = tmp_tuple_unpack_3__element_3;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_37);
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;

    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_4);
        tmp_assign_source_38 = tmp_tuple_unpack_3__element_4;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_38);
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_4);
    tmp_tuple_unpack_3__element_4 = NULL;

    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_iter_arg_4;
        tmp_iter_arg_4 = mod_consts[38];
        tmp_assign_source_40 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
        assert(!(tmp_assign_source_40 == NULL));
        assert(tmp_tuple_unpack_4__source_iter == NULL);
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_40;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_41 = UNPACK_NEXT(tmp_unpack_14, 0, 2);
        if (tmp_assign_source_41 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 42;
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_4__element_1 == NULL);
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_15 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_42 = UNPACK_NEXT(tmp_unpack_15, 1, 2);
        if (tmp_assign_source_42 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 42;
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_4__element_2 == NULL);
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_42;
    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[27];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 42;
            goto try_except_handler_9;
        }
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_43 = tmp_tuple_unpack_4__element_1;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_43);
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_44 = tmp_tuple_unpack_4__element_2;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_44);
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_iter_arg_5;
        tmp_iter_arg_5 = mod_consts[38];
        tmp_assign_source_45 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_5);
        assert(!(tmp_assign_source_45 == NULL));
        assert(tmp_tuple_unpack_5__source_iter == NULL);
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_45;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_16 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_46 = UNPACK_NEXT(tmp_unpack_16, 0, 2);
        if (tmp_assign_source_46 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 43;
            goto try_except_handler_11;
        }
        assert(tmp_tuple_unpack_5__element_1 == NULL);
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_17 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_47 = UNPACK_NEXT(tmp_unpack_17, 1, 2);
        if (tmp_assign_source_47 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 43;
            goto try_except_handler_11;
        }
        assert(tmp_tuple_unpack_5__element_2 == NULL);
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_47;
    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_5); assert(HAS_ITERNEXT(tmp_iterator_name_5));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_5)->tp_iternext)(tmp_iterator_name_5);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 43;
                    goto try_except_handler_11;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[27];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 43;
            goto try_except_handler_11;
        }
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_10;
    // End of try:
    try_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_48;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_48 = tmp_tuple_unpack_5__element_1;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_48);
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_49 = tmp_tuple_unpack_5__element_2;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_49);
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_iter_arg_6;
        tmp_iter_arg_6 = mod_consts[43];
        tmp_assign_source_50 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_6);
        assert(!(tmp_assign_source_50 == NULL));
        assert(tmp_tuple_unpack_6__source_iter == NULL);
        tmp_tuple_unpack_6__source_iter = tmp_assign_source_50;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_18 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_51 = UNPACK_NEXT(tmp_unpack_18, 0, 4);
        if (tmp_assign_source_51 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 44;
            goto try_except_handler_13;
        }
        assert(tmp_tuple_unpack_6__element_1 == NULL);
        tmp_tuple_unpack_6__element_1 = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_19 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_52 = UNPACK_NEXT(tmp_unpack_19, 1, 4);
        if (tmp_assign_source_52 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 44;
            goto try_except_handler_13;
        }
        assert(tmp_tuple_unpack_6__element_2 == NULL);
        tmp_tuple_unpack_6__element_2 = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_20 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_53 = UNPACK_NEXT(tmp_unpack_20, 2, 4);
        if (tmp_assign_source_53 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 44;
            goto try_except_handler_13;
        }
        assert(tmp_tuple_unpack_6__element_3 == NULL);
        tmp_tuple_unpack_6__element_3 = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_21 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_54 = UNPACK_NEXT(tmp_unpack_21, 3, 4);
        if (tmp_assign_source_54 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 44;
            goto try_except_handler_13;
        }
        assert(tmp_tuple_unpack_6__element_4 == NULL);
        tmp_tuple_unpack_6__element_4 = tmp_assign_source_54;
    }
    {
        PyObject *tmp_iterator_name_6;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_6); assert(HAS_ITERNEXT(tmp_iterator_name_6));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_6)->tp_iternext)(tmp_iterator_name_6);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 44;
                    goto try_except_handler_13;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[31];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 44;
            goto try_except_handler_13;
        }
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_12;
    // End of try:
    try_end_12:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_3);
    tmp_tuple_unpack_6__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_4);
    tmp_tuple_unpack_6__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
        tmp_assign_source_55 = tmp_tuple_unpack_6__element_1;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_55);
    }
    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
        tmp_assign_source_56 = tmp_tuple_unpack_6__element_2;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_56);
    }
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;

    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_3);
        tmp_assign_source_57 = tmp_tuple_unpack_6__element_3;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_57);
    }
    Py_XDECREF(tmp_tuple_unpack_6__element_3);
    tmp_tuple_unpack_6__element_3 = NULL;

    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_4);
        tmp_assign_source_58 = tmp_tuple_unpack_6__element_4;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_58);
    }
    Py_XDECREF(tmp_tuple_unpack_6__element_4);
    tmp_tuple_unpack_6__element_4 = NULL;

    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_iter_arg_7;
        tmp_iter_arg_7 = mod_consts[50];
        tmp_assign_source_60 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_7);
        assert(!(tmp_assign_source_60 == NULL));
        assert(tmp_tuple_unpack_7__source_iter == NULL);
        tmp_tuple_unpack_7__source_iter = tmp_assign_source_60;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_22 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_61 = UNPACK_NEXT(tmp_unpack_22, 0, 3);
        if (tmp_assign_source_61 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 51;
            goto try_except_handler_15;
        }
        assert(tmp_tuple_unpack_7__element_1 == NULL);
        tmp_tuple_unpack_7__element_1 = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_unpack_23;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_23 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_62 = UNPACK_NEXT(tmp_unpack_23, 1, 3);
        if (tmp_assign_source_62 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 51;
            goto try_except_handler_15;
        }
        assert(tmp_tuple_unpack_7__element_2 == NULL);
        tmp_tuple_unpack_7__element_2 = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_unpack_24;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_unpack_24 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_63 = UNPACK_NEXT(tmp_unpack_24, 2, 3);
        if (tmp_assign_source_63 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 51;
            goto try_except_handler_15;
        }
        assert(tmp_tuple_unpack_7__element_3 == NULL);
        tmp_tuple_unpack_7__element_3 = tmp_assign_source_63;
    }
    {
        PyObject *tmp_iterator_name_7;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_iterator_name_7 = tmp_tuple_unpack_7__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_7); assert(HAS_ITERNEXT(tmp_iterator_name_7));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_7)->tp_iternext)(tmp_iterator_name_7);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 51;
                    goto try_except_handler_15;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[51];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 51;
            goto try_except_handler_15;
        }
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_14;
    // End of try:
    try_end_14:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_3);
    tmp_tuple_unpack_7__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_assign_source_64 = tmp_tuple_unpack_7__element_1;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_64);
    }
    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
        tmp_assign_source_65 = tmp_tuple_unpack_7__element_2;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_65);
    }
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;

    {
        PyObject *tmp_assign_source_66;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_3);
        tmp_assign_source_66 = tmp_tuple_unpack_7__element_3;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_66);
    }
    Py_XDECREF(tmp_tuple_unpack_7__element_3);
    tmp_tuple_unpack_7__element_3 = NULL;

    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_iter_arg_8;
        tmp_iter_arg_8 = mod_consts[55];
        tmp_assign_source_67 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_8);
        assert(!(tmp_assign_source_67 == NULL));
        assert(tmp_tuple_unpack_8__source_iter == NULL);
        tmp_tuple_unpack_8__source_iter = tmp_assign_source_67;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_unpack_25;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_25 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_68 = UNPACK_NEXT(tmp_unpack_25, 0, 11);
        if (tmp_assign_source_68 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 52;
            goto try_except_handler_17;
        }
        assert(tmp_tuple_unpack_8__element_1 == NULL);
        tmp_tuple_unpack_8__element_1 = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_unpack_26;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_26 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_69 = UNPACK_NEXT(tmp_unpack_26, 1, 11);
        if (tmp_assign_source_69 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 52;
            goto try_except_handler_17;
        }
        assert(tmp_tuple_unpack_8__element_2 == NULL);
        tmp_tuple_unpack_8__element_2 = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_unpack_27;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_27 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_70 = UNPACK_NEXT(tmp_unpack_27, 2, 11);
        if (tmp_assign_source_70 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 52;
            goto try_except_handler_17;
        }
        assert(tmp_tuple_unpack_8__element_3 == NULL);
        tmp_tuple_unpack_8__element_3 = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_unpack_28;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_28 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_71 = UNPACK_NEXT(tmp_unpack_28, 3, 11);
        if (tmp_assign_source_71 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 52;
            goto try_except_handler_17;
        }
        assert(tmp_tuple_unpack_8__element_4 == NULL);
        tmp_tuple_unpack_8__element_4 = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_unpack_29;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_29 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_72 = UNPACK_NEXT(tmp_unpack_29, 4, 11);
        if (tmp_assign_source_72 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 52;
            goto try_except_handler_17;
        }
        assert(tmp_tuple_unpack_8__element_5 == NULL);
        tmp_tuple_unpack_8__element_5 = tmp_assign_source_72;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_unpack_30;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_30 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_73 = UNPACK_NEXT(tmp_unpack_30, 5, 11);
        if (tmp_assign_source_73 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 52;
            goto try_except_handler_17;
        }
        assert(tmp_tuple_unpack_8__element_6 == NULL);
        tmp_tuple_unpack_8__element_6 = tmp_assign_source_73;
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_unpack_31;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_31 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_74 = UNPACK_NEXT(tmp_unpack_31, 6, 11);
        if (tmp_assign_source_74 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 52;
            goto try_except_handler_17;
        }
        assert(tmp_tuple_unpack_8__element_7 == NULL);
        tmp_tuple_unpack_8__element_7 = tmp_assign_source_74;
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_unpack_32;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_32 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_75 = UNPACK_NEXT(tmp_unpack_32, 7, 11);
        if (tmp_assign_source_75 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 52;
            goto try_except_handler_17;
        }
        assert(tmp_tuple_unpack_8__element_8 == NULL);
        tmp_tuple_unpack_8__element_8 = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_unpack_33;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_33 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_76 = UNPACK_NEXT(tmp_unpack_33, 8, 11);
        if (tmp_assign_source_76 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 52;
            goto try_except_handler_17;
        }
        assert(tmp_tuple_unpack_8__element_9 == NULL);
        tmp_tuple_unpack_8__element_9 = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_unpack_34;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_34 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_77 = UNPACK_NEXT(tmp_unpack_34, 9, 11);
        if (tmp_assign_source_77 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 52;
            goto try_except_handler_17;
        }
        assert(tmp_tuple_unpack_8__element_10 == NULL);
        tmp_tuple_unpack_8__element_10 = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_unpack_35;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_unpack_35 = tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_78 = UNPACK_NEXT(tmp_unpack_35, 10, 11);
        if (tmp_assign_source_78 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 52;
            goto try_except_handler_17;
        }
        assert(tmp_tuple_unpack_8__element_11 == NULL);
        tmp_tuple_unpack_8__element_11 = tmp_assign_source_78;
    }
    {
        PyObject *tmp_iterator_name_8;
        CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
        tmp_iterator_name_8 = tmp_tuple_unpack_8__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_8); assert(HAS_ITERNEXT(tmp_iterator_name_8));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_8)->tp_iternext)(tmp_iterator_name_8);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 52;
                    goto try_except_handler_17;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[56];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 52;
            goto try_except_handler_17;
        }
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
    Py_DECREF(tmp_tuple_unpack_8__source_iter);
    tmp_tuple_unpack_8__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_16;
    // End of try:
    try_end_16:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_8__element_1);
    tmp_tuple_unpack_8__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_2);
    tmp_tuple_unpack_8__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_3);
    tmp_tuple_unpack_8__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_4);
    tmp_tuple_unpack_8__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_5);
    tmp_tuple_unpack_8__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_6);
    tmp_tuple_unpack_8__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_7);
    tmp_tuple_unpack_8__element_7 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_8);
    tmp_tuple_unpack_8__element_8 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_9);
    tmp_tuple_unpack_8__element_9 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_10);
    tmp_tuple_unpack_8__element_10 = NULL;
    Py_XDECREF(tmp_tuple_unpack_8__element_11);
    tmp_tuple_unpack_8__element_11 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_tuple_unpack_8__source_iter);
    Py_DECREF(tmp_tuple_unpack_8__source_iter);
    tmp_tuple_unpack_8__source_iter = NULL;
    {
        PyObject *tmp_assign_source_79;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_1);
        tmp_assign_source_79 = tmp_tuple_unpack_8__element_1;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_79);
    }
    Py_XDECREF(tmp_tuple_unpack_8__element_1);
    tmp_tuple_unpack_8__element_1 = NULL;

    {
        PyObject *tmp_assign_source_80;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_2);
        tmp_assign_source_80 = tmp_tuple_unpack_8__element_2;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_80);
    }
    Py_XDECREF(tmp_tuple_unpack_8__element_2);
    tmp_tuple_unpack_8__element_2 = NULL;

    {
        PyObject *tmp_assign_source_81;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_3);
        tmp_assign_source_81 = tmp_tuple_unpack_8__element_3;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_81);
    }
    Py_XDECREF(tmp_tuple_unpack_8__element_3);
    tmp_tuple_unpack_8__element_3 = NULL;

    {
        PyObject *tmp_assign_source_82;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_4);
        tmp_assign_source_82 = tmp_tuple_unpack_8__element_4;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_82);
    }
    Py_XDECREF(tmp_tuple_unpack_8__element_4);
    tmp_tuple_unpack_8__element_4 = NULL;

    {
        PyObject *tmp_assign_source_83;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_5);
        tmp_assign_source_83 = tmp_tuple_unpack_8__element_5;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_83);
    }
    Py_XDECREF(tmp_tuple_unpack_8__element_5);
    tmp_tuple_unpack_8__element_5 = NULL;

    {
        PyObject *tmp_assign_source_84;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_6);
        tmp_assign_source_84 = tmp_tuple_unpack_8__element_6;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_84);
    }
    Py_XDECREF(tmp_tuple_unpack_8__element_6);
    tmp_tuple_unpack_8__element_6 = NULL;

    {
        PyObject *tmp_assign_source_85;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_7);
        tmp_assign_source_85 = tmp_tuple_unpack_8__element_7;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_85);
    }
    Py_XDECREF(tmp_tuple_unpack_8__element_7);
    tmp_tuple_unpack_8__element_7 = NULL;

    {
        PyObject *tmp_assign_source_86;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_8);
        tmp_assign_source_86 = tmp_tuple_unpack_8__element_8;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_86);
    }
    Py_XDECREF(tmp_tuple_unpack_8__element_8);
    tmp_tuple_unpack_8__element_8 = NULL;

    {
        PyObject *tmp_assign_source_87;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_9);
        tmp_assign_source_87 = tmp_tuple_unpack_8__element_9;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_87);
    }
    Py_XDECREF(tmp_tuple_unpack_8__element_9);
    tmp_tuple_unpack_8__element_9 = NULL;

    {
        PyObject *tmp_assign_source_88;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_10);
        tmp_assign_source_88 = tmp_tuple_unpack_8__element_10;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_88);
    }
    Py_XDECREF(tmp_tuple_unpack_8__element_10);
    tmp_tuple_unpack_8__element_10 = NULL;

    {
        PyObject *tmp_assign_source_89;
        CHECK_OBJECT(tmp_tuple_unpack_8__element_11);
        tmp_assign_source_89 = tmp_tuple_unpack_8__element_11;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_89);
    }
    Py_XDECREF(tmp_tuple_unpack_8__element_11);
    tmp_tuple_unpack_8__element_11 = NULL;

    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 66;
        tmp_assign_source_90 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 67;
        tmp_assign_source_91 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 68;
        tmp_assign_source_92 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 69;
        tmp_assign_source_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 70;
        tmp_assign_source_94 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 71;
        tmp_assign_source_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 72;
        tmp_assign_source_96 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 73;
        tmp_assign_source_97 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 74;
        tmp_assign_source_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 75;
        tmp_assign_source_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 76;
        tmp_assign_source_100 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 77;
        tmp_assign_source_101 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 78;
        tmp_assign_source_102 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_13);
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 79;
        tmp_assign_source_103 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_14);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 80;
        tmp_assign_source_104 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_15);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_args_element_value_16 == NULL)) {
            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 81;
        tmp_assign_source_105 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_16);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_args_element_value_17 == NULL)) {
            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 82;
        tmp_assign_source_106 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_17);
        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_18;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_args_element_value_18 == NULL)) {
            tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 83;
        tmp_assign_source_107 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_18);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_19;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_args_element_value_19 == NULL)) {
            tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 84;
        tmp_assign_source_108 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_19);
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_20;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_args_element_value_20 == NULL)) {
            tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 87;
        tmp_assign_source_109 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_20);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_21;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_21 == NULL)) {
            tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 88;
        tmp_assign_source_110 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_21);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_22;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_args_element_value_22 == NULL)) {
            tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 89;
        tmp_assign_source_111 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_22);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_23;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_args_element_value_23 == NULL)) {
            tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 90;
        tmp_assign_source_112 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_23);
        if (tmp_assign_source_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_24;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_args_element_value_24 == NULL)) {
            tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 91;
        tmp_assign_source_113 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_24);
        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_25;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_args_element_value_25 == NULL)) {
            tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 92;
        tmp_assign_source_114 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_25);
        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_26;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_26 == NULL)) {
            tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 93;
        tmp_assign_source_115 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_26);
        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_27;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_args_element_value_27 == NULL)) {
            tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 94;
        tmp_assign_source_116 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_27);
        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_28;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_28 == NULL)) {
            tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 95;
        tmp_assign_source_117 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_28);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_29;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 96;
        tmp_assign_source_118 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_29);
        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_30;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_30 == NULL)) {
            tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 97;
        tmp_assign_source_119 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_30);
        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_31;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_args_element_value_31 == NULL)) {
            tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 98;
        tmp_assign_source_120 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_31);
        if (tmp_assign_source_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_32;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_32 == NULL)) {
            tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 99;
        tmp_assign_source_121 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_32);
        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_33;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_args_element_value_33 == NULL)) {
            tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 100;
        tmp_assign_source_122 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_33);
        if (tmp_assign_source_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_34;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_args_element_value_34 == NULL)) {
            tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 101;
        tmp_assign_source_123 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_34);
        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_35;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_args_element_value_35 == NULL)) {
            tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 102;
        tmp_assign_source_124 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_35);
        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_36;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_args_element_value_36 == NULL)) {
            tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 103;
        tmp_assign_source_125 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_36);
        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = mod_consts[104];
        tmp_assign_source_126 = _PyDict_NewPresized( 42 );
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[105];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[106];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[107];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[108];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[109];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[110];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[111];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[112];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = mod_consts[113];
        tmp_dict_value_1 = mod_consts[114];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[115];
        tmp_dict_value_1 = mod_consts[116];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[117];
        tmp_dict_value_1 = mod_consts[118];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[119];
        tmp_dict_value_1 = mod_consts[120];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[121];
        tmp_dict_value_1 = mod_consts[122];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[123];
        tmp_dict_value_1 = mod_consts[124];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[125];
        tmp_dict_value_1 = mod_consts[126];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[127];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[128];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[129];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[130];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[131];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[132];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[133];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[134];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[135];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[136];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[137];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[138];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[139];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[140];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[141];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[142];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[143];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[144];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[145];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[146];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[147];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[148];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[149];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[150];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[151];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto dict_build_exception_1;
        }
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto dict_build_exception_1;
        }
        tmp_dict_value_1 = mod_consts[152];
        tmp_res = PyDict_SetItem(tmp_assign_source_126, tmp_dict_key_1, tmp_dict_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto dict_build_exception_1;
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_126);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_iter_arg_9;
        tmp_iter_arg_9 = mod_consts[154];
        tmp_assign_source_127 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_9);
        assert(!(tmp_assign_source_127 == NULL));
        assert(tmp_tuple_unpack_9__source_iter == NULL);
        tmp_tuple_unpack_9__source_iter = tmp_assign_source_127;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_unpack_36;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_36 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_128 = UNPACK_NEXT(tmp_unpack_36, 0, 3);
        if (tmp_assign_source_128 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 153;
            goto try_except_handler_19;
        }
        assert(tmp_tuple_unpack_9__element_1 == NULL);
        tmp_tuple_unpack_9__element_1 = tmp_assign_source_128;
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_unpack_37;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_37 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_129 = UNPACK_NEXT(tmp_unpack_37, 1, 3);
        if (tmp_assign_source_129 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 153;
            goto try_except_handler_19;
        }
        assert(tmp_tuple_unpack_9__element_2 == NULL);
        tmp_tuple_unpack_9__element_2 = tmp_assign_source_129;
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_unpack_38;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_unpack_38 = tmp_tuple_unpack_9__source_iter;
        tmp_assign_source_130 = UNPACK_NEXT(tmp_unpack_38, 2, 3);
        if (tmp_assign_source_130 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 153;
            goto try_except_handler_19;
        }
        assert(tmp_tuple_unpack_9__element_3 == NULL);
        tmp_tuple_unpack_9__element_3 = tmp_assign_source_130;
    }
    {
        PyObject *tmp_iterator_name_9;
        CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
        tmp_iterator_name_9 = tmp_tuple_unpack_9__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_9); assert(HAS_ITERNEXT(tmp_iterator_name_9));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_9)->tp_iternext)(tmp_iterator_name_9);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 153;
                    goto try_except_handler_19;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[51];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 153;
            goto try_except_handler_19;
        }
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
    Py_DECREF(tmp_tuple_unpack_9__source_iter);
    tmp_tuple_unpack_9__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_18;
    // End of try:
    try_end_18:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_9__element_1);
    tmp_tuple_unpack_9__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_9__element_2);
    tmp_tuple_unpack_9__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_9__element_3);
    tmp_tuple_unpack_9__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_tuple_unpack_9__source_iter);
    Py_DECREF(tmp_tuple_unpack_9__source_iter);
    tmp_tuple_unpack_9__source_iter = NULL;
    {
        PyObject *tmp_assign_source_131;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_1);
        tmp_assign_source_131 = tmp_tuple_unpack_9__element_1;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_131);
    }
    Py_XDECREF(tmp_tuple_unpack_9__element_1);
    tmp_tuple_unpack_9__element_1 = NULL;

    {
        PyObject *tmp_assign_source_132;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_2);
        tmp_assign_source_132 = tmp_tuple_unpack_9__element_2;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_132);
    }
    Py_XDECREF(tmp_tuple_unpack_9__element_2);
    tmp_tuple_unpack_9__element_2 = NULL;

    {
        PyObject *tmp_assign_source_133;
        CHECK_OBJECT(tmp_tuple_unpack_9__element_3);
        tmp_assign_source_133 = tmp_tuple_unpack_9__element_3;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_133);
    }
    Py_XDECREF(tmp_tuple_unpack_9__element_3);
    tmp_tuple_unpack_9__element_3 = NULL;

    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_iter_arg_10;
        tmp_iter_arg_10 = mod_consts[158];
        tmp_assign_source_134 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_10);
        assert(!(tmp_assign_source_134 == NULL));
        assert(tmp_tuple_unpack_10__source_iter == NULL);
        tmp_tuple_unpack_10__source_iter = tmp_assign_source_134;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_unpack_39;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_39 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_135 = UNPACK_NEXT(tmp_unpack_39, 0, 5);
        if (tmp_assign_source_135 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 157;
            goto try_except_handler_21;
        }
        assert(tmp_tuple_unpack_10__element_1 == NULL);
        tmp_tuple_unpack_10__element_1 = tmp_assign_source_135;
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_unpack_40;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_40 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_136 = UNPACK_NEXT(tmp_unpack_40, 1, 5);
        if (tmp_assign_source_136 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 157;
            goto try_except_handler_21;
        }
        assert(tmp_tuple_unpack_10__element_2 == NULL);
        tmp_tuple_unpack_10__element_2 = tmp_assign_source_136;
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_unpack_41;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_41 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_137 = UNPACK_NEXT(tmp_unpack_41, 2, 5);
        if (tmp_assign_source_137 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 157;
            goto try_except_handler_21;
        }
        assert(tmp_tuple_unpack_10__element_3 == NULL);
        tmp_tuple_unpack_10__element_3 = tmp_assign_source_137;
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_unpack_42;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_42 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_138 = UNPACK_NEXT(tmp_unpack_42, 3, 5);
        if (tmp_assign_source_138 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 157;
            goto try_except_handler_21;
        }
        assert(tmp_tuple_unpack_10__element_4 == NULL);
        tmp_tuple_unpack_10__element_4 = tmp_assign_source_138;
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_unpack_43;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_unpack_43 = tmp_tuple_unpack_10__source_iter;
        tmp_assign_source_139 = UNPACK_NEXT(tmp_unpack_43, 4, 5);
        if (tmp_assign_source_139 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 157;
            goto try_except_handler_21;
        }
        assert(tmp_tuple_unpack_10__element_5 == NULL);
        tmp_tuple_unpack_10__element_5 = tmp_assign_source_139;
    }
    {
        PyObject *tmp_iterator_name_10;
        CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
        tmp_iterator_name_10 = tmp_tuple_unpack_10__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_10); assert(HAS_ITERNEXT(tmp_iterator_name_10));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_10)->tp_iternext)(tmp_iterator_name_10);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;
                    goto try_except_handler_21;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[159];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 157;
            goto try_except_handler_21;
        }
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
    Py_DECREF(tmp_tuple_unpack_10__source_iter);
    tmp_tuple_unpack_10__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_20;
    // End of try:
    try_end_20:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_10__element_1);
    tmp_tuple_unpack_10__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_10__element_2);
    tmp_tuple_unpack_10__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_10__element_3);
    tmp_tuple_unpack_10__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_10__element_4);
    tmp_tuple_unpack_10__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_10__element_5);
    tmp_tuple_unpack_10__element_5 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_tuple_unpack_10__source_iter);
    Py_DECREF(tmp_tuple_unpack_10__source_iter);
    tmp_tuple_unpack_10__source_iter = NULL;
    {
        PyObject *tmp_assign_source_140;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_1);
        tmp_assign_source_140 = tmp_tuple_unpack_10__element_1;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_140);
    }
    Py_XDECREF(tmp_tuple_unpack_10__element_1);
    tmp_tuple_unpack_10__element_1 = NULL;

    {
        PyObject *tmp_assign_source_141;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_2);
        tmp_assign_source_141 = tmp_tuple_unpack_10__element_2;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_141);
    }
    Py_XDECREF(tmp_tuple_unpack_10__element_2);
    tmp_tuple_unpack_10__element_2 = NULL;

    {
        PyObject *tmp_assign_source_142;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_3);
        tmp_assign_source_142 = tmp_tuple_unpack_10__element_3;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_142);
    }
    Py_XDECREF(tmp_tuple_unpack_10__element_3);
    tmp_tuple_unpack_10__element_3 = NULL;

    {
        PyObject *tmp_assign_source_143;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_4);
        tmp_assign_source_143 = tmp_tuple_unpack_10__element_4;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_143);
    }
    Py_XDECREF(tmp_tuple_unpack_10__element_4);
    tmp_tuple_unpack_10__element_4 = NULL;

    {
        PyObject *tmp_assign_source_144;
        CHECK_OBJECT(tmp_tuple_unpack_10__element_5);
        tmp_assign_source_144 = tmp_tuple_unpack_10__element_5;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_144);
    }
    Py_XDECREF(tmp_tuple_unpack_10__element_5);
    tmp_tuple_unpack_10__element_5 = NULL;

    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = PyDict_Copy(mod_consts[165]);
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_iter_arg_11;
        tmp_iter_arg_11 = mod_consts[167];
        tmp_assign_source_146 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_11);
        assert(!(tmp_assign_source_146 == NULL));
        assert(tmp_tuple_unpack_11__source_iter == NULL);
        tmp_tuple_unpack_11__source_iter = tmp_assign_source_146;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_unpack_44;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_unpack_44 = tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_147 = UNPACK_NEXT(tmp_unpack_44, 0, 3);
        if (tmp_assign_source_147 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 174;
            goto try_except_handler_23;
        }
        assert(tmp_tuple_unpack_11__element_1 == NULL);
        tmp_tuple_unpack_11__element_1 = tmp_assign_source_147;
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_unpack_45;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_unpack_45 = tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_148 = UNPACK_NEXT(tmp_unpack_45, 1, 3);
        if (tmp_assign_source_148 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 174;
            goto try_except_handler_23;
        }
        assert(tmp_tuple_unpack_11__element_2 == NULL);
        tmp_tuple_unpack_11__element_2 = tmp_assign_source_148;
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_unpack_46;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_unpack_46 = tmp_tuple_unpack_11__source_iter;
        tmp_assign_source_149 = UNPACK_NEXT(tmp_unpack_46, 2, 3);
        if (tmp_assign_source_149 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 174;
            goto try_except_handler_23;
        }
        assert(tmp_tuple_unpack_11__element_3 == NULL);
        tmp_tuple_unpack_11__element_3 = tmp_assign_source_149;
    }
    {
        PyObject *tmp_iterator_name_11;
        CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
        tmp_iterator_name_11 = tmp_tuple_unpack_11__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_11); assert(HAS_ITERNEXT(tmp_iterator_name_11));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_11)->tp_iternext)(tmp_iterator_name_11);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 174;
                    goto try_except_handler_23;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[51];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 174;
            goto try_except_handler_23;
        }
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
    Py_DECREF(tmp_tuple_unpack_11__source_iter);
    tmp_tuple_unpack_11__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_22;
    // End of try:
    try_end_22:;
    goto try_end_23;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_11__element_1);
    tmp_tuple_unpack_11__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_11__element_2);
    tmp_tuple_unpack_11__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_11__element_3);
    tmp_tuple_unpack_11__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    CHECK_OBJECT(tmp_tuple_unpack_11__source_iter);
    Py_DECREF(tmp_tuple_unpack_11__source_iter);
    tmp_tuple_unpack_11__source_iter = NULL;
    {
        PyObject *tmp_assign_source_150;
        CHECK_OBJECT(tmp_tuple_unpack_11__element_1);
        tmp_assign_source_150 = tmp_tuple_unpack_11__element_1;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_150);
    }
    Py_XDECREF(tmp_tuple_unpack_11__element_1);
    tmp_tuple_unpack_11__element_1 = NULL;

    {
        PyObject *tmp_assign_source_151;
        CHECK_OBJECT(tmp_tuple_unpack_11__element_2);
        tmp_assign_source_151 = tmp_tuple_unpack_11__element_2;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_151);
    }
    Py_XDECREF(tmp_tuple_unpack_11__element_2);
    tmp_tuple_unpack_11__element_2 = NULL;

    {
        PyObject *tmp_assign_source_152;
        CHECK_OBJECT(tmp_tuple_unpack_11__element_3);
        tmp_assign_source_152 = tmp_tuple_unpack_11__element_3;
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_152);
    }
    Py_XDECREF(tmp_tuple_unpack_11__element_3);
    tmp_tuple_unpack_11__element_3 = NULL;

    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_called_value_37;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 180;
        tmp_assign_source_153 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_37, mod_consts[171]);

        if (tmp_assign_source_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_called_value_38;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 181;
        tmp_assign_source_154 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_38, mod_consts[173]);

        if (tmp_assign_source_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_called_value_39;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 182;
        tmp_assign_source_155 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_39, mod_consts[175]);

        if (tmp_assign_source_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_called_value_40;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 183;
        tmp_assign_source_156 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_40, mod_consts[177]);

        if (tmp_assign_source_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_called_value_41;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 184;
        tmp_assign_source_157 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_41, mod_consts[179]);

        if (tmp_assign_source_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_called_value_42;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 185;
        tmp_assign_source_158 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_42, mod_consts[181]);

        if (tmp_assign_source_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        tmp_left_value_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_left_value_1 == NULL)) {
            tmp_left_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_right_value_1 == NULL)) {
            tmp_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
        }

        assert(!(tmp_right_value_1 == NULL));
        tmp_assign_source_159 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_assign_source_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_159);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_assign_source_160 == NULL)) {
            tmp_assign_source_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_assign_source_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_assign_source_161 == NULL)) {
            tmp_assign_source_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
        }

        if (tmp_assign_source_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_161);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[187];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_163);
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_164;


        tmp_assign_source_164 = MAKE_FUNCTION_paramiko$common$$$function__1_asbytes();

        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_called_value_43;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 217;
        tmp_assign_source_165 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_43, mod_consts[188]);

        if (tmp_assign_source_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_called_value_44;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        frame_3092ec18cf45118548cfab3728b70bef->m_frame.f_lineno = 218;
        tmp_assign_source_166 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_44, mod_consts[190]);

        if (tmp_assign_source_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[196];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[198];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[200];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[202];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[204];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_174 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[206]);
        if (tmp_assign_source_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_175 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[207]);
        if (tmp_assign_source_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_176 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[208]);
        if (tmp_assign_source_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_177 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[209]);
        if (tmp_assign_source_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_178 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[210]);
        if (tmp_assign_source_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_178);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3092ec18cf45118548cfab3728b70bef);
#endif
    popFrameStack();

    assertFrameObject(frame_3092ec18cf45118548cfab3728b70bef);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3092ec18cf45118548cfab3728b70bef);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3092ec18cf45118548cfab3728b70bef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3092ec18cf45118548cfab3728b70bef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3092ec18cf45118548cfab3728b70bef, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[211];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[213];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[215];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[215];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = mod_consts[218];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = mod_consts[220];
        UPDATE_STRING_DICT0(moduledict_paramiko$common, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_184);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("paramiko.common", false);

    return module_paramiko$common;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("paramiko$common", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
