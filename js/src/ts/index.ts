// @ts-ignore - emscripten generated module
import createModule from "../../dist/pkg/python_template_cppjswasm.js";

export { createModule };

export const placeholder = "";

export const add = async (i: number, j: number): Promise<number> => {
  const mod = await createModule();
  return mod.add(i, j);
};
